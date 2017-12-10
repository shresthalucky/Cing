#include <stdio.h>
#include <stdlib.h>
#include "../functions.h"

int main(){

	int rows, columns,test;
	char o[10];

	printf("Number of rows in matrix: ");
	scanf("%d", &rows);

	printf("Number of columns in matrix: ");
	scanf("%d", &columns);

	getMatrix(rows, columns);
do{
	printf("Choose Your Operation:\n1. Add\n2. Subract\n:");
	scanf("%s", o);

	test = atoi(o);
}while(test == 0);

switch(test){
	case 1 : sumMatrix(rows, columns);
	break;
	case 2 : subMatrix(rows, columns);
	break;
	default: printf("Wrong input!");
	break;
}

	return 0;
}
