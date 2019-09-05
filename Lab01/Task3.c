#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 20
void _matMultiplier();

int main(){
	_matMultiplier();
	return 0;
}

void _matMultiplier(){
	int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE], r1, c1, r2, c2, i, j, k;
	printf("Enter rows for first matrix: ");
	scanf("%d", &r1);
	printf("Enter columns for first matrix: ");
	scanf("%d", &c1);
	printf("Enter rows for second matrix: ");
	scanf("%d", &r2);
	printf("Enter columns for second matrix: ");
	scanf("%d", &c2);
	while (c1 != r2){
		printf("Error! column of first matrix not equal to row of second.\n\n");
		printf("Enter rows for first matrix: ");
		scanf("%d", &r1);
		printf("Enter columns for first matrix: ");
		scanf("%d", &c1);
		printf("Enter rows for second matrix: ");
		scanf("%d", &r2);
		printf("Enter columns for second matrix: ");
		scanf("%d", &c2);
	}
	printf("\nEnter elements of matrix 1:\n");
	for (i = 0; i < r1; ++i){
		for (j = 0; j < c1; ++j){
			printf("Enter element # %d: ", i + 1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter elements of matrix 2:\n");
	for (i = 0; i < r2; ++i){
		for (j = 0; j < c2; ++j){
			printf("Enter element # %d: ", i + 1);
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < r1; ++i){
		for (j = 0; j < c2; ++j){
			result[i][j] = 0;
		}
	}
	for (i = 0; i < r1; ++i){
		for (j = 0; j < c2; ++j){
			for (k = 0; k < c1; ++k){
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("\nResult Matrix:\n");
	for (i = 0; i<r1; ++i)
		for (j = 0; j<c2; ++j){
			printf("%d  ", result[i][j]);
			if (j == c2 - 1){
				printf("\n\n");
			}
		}
	return 0;
}
