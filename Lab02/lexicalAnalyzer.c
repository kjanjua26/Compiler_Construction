#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXCHAR 1000

void countLines(FILE*);
void checkIdentifier(FILE*);

int main(){
    char* filename = "/Users/Janjua/Desktop/BSCS/Semester 7th/Compiler Construction/Labs/Lab02/inp.txt";
    FILE *fileptr;
    fileptr = fopen(filename, "r");
    checkIdentifier(fileptr);
    fclose(fileptr);
    fileptr = fopen(filename, "r");
    countLines(fileptr);
    return 0;
}

void countLines(FILE* fileptr){
    char chr;
    int count_lines = 0;
    chr = getc(fileptr);
    while (chr != EOF){
        if (chr == '\n'){
            count_lines++;
        }
        chr = getc(fileptr);
    }
    printf("There are %d line(s) in the file\n", count_lines+1);
}

void checkIdentifier(FILE* fileptr){
    char chr;
    int count_lines = 0;
    chr = getc(fileptr);
    while (chr != EOF){
        if(isalpha(chr)){
            printf("%c is an identifier!\n", chr);
        }
        else if(isdigit(chr)){
            printf("%c is a digit!\n", chr);
        }else{
            printf("%c is a special character!\n", chr);
        }
        chr = getc(fileptr);
    }

}