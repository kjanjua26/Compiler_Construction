#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<regex.h>
#include<ctype.h>

#define BUFFSIZE 1024

void readAndFillTheBuffer(FILE*, char *);
int matchTheRegex(char *, char *);
void printTheMatches(FILE *, char *);

int main(){
    FILE *fp = fopen("inp3.txt", "r");
    char *source;
    fseek(fp, 0, SEEK_END); 
    long fsize = ftell(fp); 
    rewind(fp); // set the pointer back at start.
    source = malloc(fsize + 1);
    char * exp = "(m|t|M|T)[a-zA-Z]*";
    readAndFillTheBuffer(fp, source);
    if(matchTheRegex(source, exp))
        printTheMatches(fp, source);
    fclose(fp);
    free(source);
    return 0;
}

void readAndFillTheBuffer(FILE* fp, char* source){
    char symbol;
    int count = 0, i = 0;
    while (i < BUFFSIZE && (symbol = fgetc(fp)) != EOF)
        source[i++] = symbol;
}

int matchTheRegex(char * source, char * exp){
    regex_t regex;
    int reti;
    reti = regcomp(&regex, exp, REG_EXTENDED);
    reti = regexec(&regex, source, 0, NULL, 0);
    if( !reti ){
        printf("The expression %s is matched!\n", exp);
        return 1;
    }
    else if( reti == REG_NOMATCH ){
        printf("It is not a match!\n");
        return 0;
    }
    regfree(&regex);
}

void printTheMatches(FILE* fp, char * source){
    char buff[BUFFSIZE];
    int i = 0, ch;
    for(int j = 0; j < BUFFSIZE; j++){
        ch = source[j];
        if(isalnum(ch))
            buff[i++] = ch;
        else if((ch == ' ' || ch == '\n') && (i != 0)){
            buff[i] = '\0';
            i = 0;
        if (buff[0] == 't' || buff[0] == 'm' || buff[0] == 'T' || buff[0] == 'M')
            printf("%s\n", buff);
        }
    }
}