#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

void _sumOfDigits(int a);

int main(){
	int a;
	printf("Welcome to sum of digits calculator!");
	printf("Please enter a number less than 1000: ");
	scanf("%d", &a);
	_sumOfDigits(a);
	return 0;
}

void _sumOfDigits(int a){
	int t, sum = 0, remainder;
	t = a;
	while (t != 0){
		remainder = t % 10;
		sum += remainder;
		t = t / 10;
	}
	printf("The sum of digits of %d is %d\n", a, sum);
}
