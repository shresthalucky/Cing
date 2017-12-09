#include <stdio.h>
#include "../functions.h"

int main(){

	int rows, columns;

	printf("Number of rows in matrix: ");
	scanf("%d", &rows);

	printf("Number of columns in matrix: ");
	scanf("%d", &columns);

	getMatrix(rows, columns);
	sumMatrix(rows, columns);

	return 0;
}