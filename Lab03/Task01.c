#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void readAndFillTheBuffer(FILE*, char *);
void inputBuffering(char *, long);

int main(){
    FILE *fp = fopen("inp.txt", "r");
    fseek(fp, 0, SEEK_END); 
    long fsize = ftell(fp); 
    rewind(fp); // set the pointer back at start.
    char *source = malloc(fsize + 1);

    readAndFillTheBuffer(fp, source);
    inputBuffering(source, fsize+1);
    fclose(fp);
    free(source);
    return 0;
}

void readAndFillTheBuffer(FILE* fp, char* source){
    char symbol;
    int count = 0;
    if(fp != NULL){
        while((symbol = getc(fp)) != EOF && count < 100){
            strcat(source, &symbol);
            count++;
        }
    }
}

void inputBuffering(char * source, long buffSize){
    // Do the two pointer magic here.
    char *lexeme = source;
    char *forward = source;
    char identifier[10];
    int p = 0;
    char *str = "";
    for(int i = 0; i < strlen(source); i++){
        for(int j = 0; j < strlen(source); j++){                
                if(isalpha(*(lexeme)) && *(lexeme) != ' '){
                    identifier[p] = *(lexeme);
                    p += 1;
                }
                if(*(lexeme) == ' '){
                    p = 0;
                }
                if(*(lexeme) == '*' || *(lexeme) == '+' || *(lexeme) == '-' || *(lexeme) == '=' || *(lexeme) == '/' || *(lexeme) == '%'){
                    printf("The operator is: %c\n", *(lexeme));
                }
                identifier[p] = '\0';
                forward = (lexeme+1);
                lexeme = forward;
                if(*(lexeme) == ' ' || *(lexeme) == '\0'){
                    if(strlen(identifier) != 0)
                        printf("The identifier is: %s\n", identifier);
                }
                break;
        }
    }
}