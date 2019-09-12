#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 5
void checkIfIdentifier(char []);

int main(){
    char input[SIZE];
	printf("Please enter the line to check: \n");
	gets(input);
    checkIfIdentifier(input);
    return 0;
}

void checkIfIdentifier(char input[]){
    char initial = input[0];
    if(initial >= '0' && initial <= '9'){
        printf("Not a valid identifier!\n");
        return;
    }
    else if (!isalpha(initial)) {
        printf("Not a valid identifier!\n");
        return;
    }
    // Start from second character
    for(int i = 0; i < SIZE; i++){
        char ch = input[i];
        if(ch >= 65 && ch <= 90 ||
            ch >= 97 && ch <= 122 ||
            ch >= 48 && ch <= 57 || 
            ch == '_'){
               continue;
            }
        else{
            printf("Not a valid identifier!\n");
            return;
        }
    }
    printf("Valid identifier!\n");
}