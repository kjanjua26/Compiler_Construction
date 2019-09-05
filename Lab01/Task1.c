#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10

void checkIfString(char strToCheck[]){
	if (strToCheck[0] == '/' && (strToCheck[1] == '/' || strToCheck[1] == '*')){
		printf("It is a comment!\n");
	}
	else{
		printf("It is not a comment!\n");
	}
}
void main(){
	char input[SIZE];
	printf("Please enter the line to check: \n");
	gets(input);
	checkIfString(input);
}
