#include<stdio.h>
#include<stdlib.h>

void checkIfOperator(char);

int main(){
    char input;
	printf("Please enter a symbol to check: ");
	scanf("%c", &input);
    checkIfOperator(input);
    return 0;
}

void checkIfOperator(char strToCheck){
    if(strToCheck == '*'){
        printf("Multiplication\n");
    }
    else if (strToCheck == '+'){
        printf("Addition\n");
    }
    else if (strToCheck == '-'){
        printf("Subtraction\n");
    }
    else if (strToCheck == '/'){
        printf("Division\n");
    }
    else if (strToCheck == '%'){
        printf("Modulus\n");
    }
    else{
        printf("Not an operator\n");
    }
}