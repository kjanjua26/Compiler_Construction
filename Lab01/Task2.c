#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<conio.h>

void _addition(int a, int b);
void _subtraction(int a, int b);
void _multiplication(int a, int b);
void _division(int a, int b);
void _modulus(int a, int b);
void _power(int a, int b);
void _factorial(int a);
void startTheCalculator();

void main(){
	int a, b;
	char type;
	while (1){
		printf("Welcome to Calculator!\n");
		printf("Please enter first number: ");
		scanf("%d", &a);
		printf("Please enter the second number: ");
		scanf("%d", &b);
		printf("Please select the operation you want to perform on the numbers.\n");
		printf("a => addition, b => subtraction, c => multiplication, d => division, e => modulus, f => power, g => factorial, q => Quit, C => Clear Screen!\n");
		scanf(" %c", &type);
		switch (type){
		case 'a':
			_addition(a, b);
			break;
		case 'b':
			_subtraction(a, b);
			break;
		case 'c':
			_multiplication(a, b);
			break;
		case 'd':
			_division(a, b);
			break;
		case 'e':
			_modulus(a, b);
			break;
		case 'f':
			_power(a, b);
			break;
		case 'g':
			_factorial(a);
			break;
		case 'q':
			exit(0);
			break;
		case 'C':
			system("cls");
			break;
		default:
			system("cls");
		}
	}
}

void _addition(int a, int b){
	printf("The sum of %d and %d is: %d\n", a, b, a + b);
}

void _subtraction(int a, int b){
	printf("The difference of %d and %d is: %d\n", a, b, a - b);
}

void _multiplication(int a, int b){
	printf("The product of %d and %d is: %d\n", a, b, a * b);
}

void _division(int a, int b){
	if (b != 0){
		printf("The division of %d and %d is: %d\n", a, b, a / b);
	}
	else{
		printf("Division by 0 not possible.\n");
	}
}

void _modulus(int a, int b){
	printf("The modlulus of %d and %d is: %d\n", a, b, a % b);
}

void _power(int a, int b){
	printf("The power of %d raised to %d is: %f\n", a, b, pow(a, b));
}

void _factorial(int a){
	int i, fact = 1;
	if (a == 0){
		printf("The factorial of %d is 1\n", a);
	}
	else{
		for (i = 1; i <= a; i++){
			fact = fact*i;
		}
		printf("The factorial of %d is: %ld\n", a, fact);
	}
}
