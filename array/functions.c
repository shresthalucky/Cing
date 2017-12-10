#include <stdio.h>
#include "functions.h"

void aSum(int n, int a[]){
	int i, sum=0;
	for (i = 0; i < n; i++){
		sum = sum + a[i];
	}
	printf("\nSum: %d\n", sum);
}

int i, j, matrix_1[100][100], matrix_2[100][100];

void getMatrix(int rows, int columns) {

	printf("\nInputs for matrix A:\n");

	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("A%d%d : ", i+1, j+1);
			scanf("%d", &matrix_1[i][j]);
		}
	}

	printf("\nMatrix A:\n");

	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d\t", matrix_1[i][j]);
		}
		printf("\n");
	}

	printf("\nInputs for matrix B:\n");

	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("B%d%d : ", i+1, j+1);
			scanf("%d", &matrix_2[i][j]);
		}
	}

	printf("\nMatrix B:\n");

	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d\t", matrix_2[i][j]);
		}
		printf("\n");
	}
}

void sumMatrix(int rows, int columns){
	printf("\nMatrix A + Matrix B:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d\t", matrix_1[i][j] + matrix_2[i][j]);
		}
		printf("\n");
	}

}

void subMatrix(int rows, int columns){
	printf("\nMatrix A - Matrix B:\n");
	for(i=0; i<rows; i++){
		for(j=0; j<columns; j++){
			printf("%d\t", matrix_1[i][j] - matrix_2[i][j]);
		}
		printf("\n");
	}
}
