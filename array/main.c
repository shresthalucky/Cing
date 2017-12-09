#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

int main(){

	int temp2;
  char n[100];
	printf("How many ints? : ");
	scanf("%s", n);
	printf("----------------------------------------------\n");

  temp2=atoi(n);

	(temp2==0) ? iftrue(n) : iffalse(temp2);

	return 0;
}

void iftrue(char n[100]) {
	printf("%s is Not an Interger!\n", n);
	printf("----------------------------------\n");
	main();
}

void iffalse(int temp2) {
	int i,j,temp, a[50];
	for (i = 0; i < temp2; i++){
			printf("Enter number %d: ", i+1);
			if (scanf("%d", &a[i]) != 1) {
				printf("Error!");
				exit(EXIT_FAILURE);
			}
		}
			for (i = 0; i < temp2; i++){
				for (j=i+1; j < temp2; j++){
					if (a[i] > a[j]){
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			printf("----------------------------------------------\n");
			printf("Ascending sorting: ");
			for (i = 0; i < temp2; i++){
				printf("%d, ", a[i]);
			}
			printf("\n----------------------------------------------\n");
			printf("Descending sorting: ");
			for (i = temp2-1; i >= 0; i--){
				printf("%d, ", a[i]);
			}
			printf("\n----------------------------------------------\n");
}