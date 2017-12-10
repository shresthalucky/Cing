#include <stdio.h>
#include "../functions.h"

int main(){

	int rows, columns,o;

	printf("Number of rows in matrix: ");
	scanf("%d", &rows);

	printf("Number of columns in matrix: ");
	scanf("%d", &columns);

	getMatrix(rows, columns);

	ifwrong:
	printf("Choose Your Operation:\n1. Add\n2. Subract\n:");
	scanf("%d", &o);
	switch(o){
		case 1 : sumMatrix(rows, columns);
		break;
		case 2 : subMatrix(rows, columns);
		break;
		default: printf("Wrong input!");
		goto ifwrong;
	}


	return 0;
}
