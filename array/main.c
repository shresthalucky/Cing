#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

int main(){

	int a[50], i, j, temp, temp2;
  char n[100];
	printf("How many ints?\n");
	scanf("%s", &n);

  temp2=atoi(n);

	//(temp2==0) ? iftrue(temp2) : iffalse(temp2, &a[50]);

	if(temp2==0){
    printf("Not a interger");
      // exit(EXIT_FAILURE); //same as exit(1)
    }
  else{
      for (i = 0; i < temp2; i++){
    			printf("Enter number %d: ", i+1);
    			scanf("%d", &a[i]);
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

    		printf("Ascending sorting: ");
    		for (i = 0; i < temp2; i++){
    			printf("%d, ", a[i]);
    		}

    		printf("Descending sorting: ");
    		for (i = temp2-1; i >= 0; i--){
    			printf("%d, ", a[i]);
    		}
      }

  // aSum(n, a);

	return 0;
}

// void iftrue(int temp2) {
// 	printf("Not An Interger");
// }
//
// void iffalse(int temp2, int *a[50]) {
// 	int i,j,temp;
// 	for (i = 0; i < temp2; i++){
// 			printf("Enter number %d: ", i+1);
// 			scanf("%d", &a[i]);
// 		}
// 		for (i = 0; i < temp2; i++){
// 			for (j=i+1; j < temp2; j++){
// 				if (a[i] > a[j]){
// 					temp = a[i];
// 					a[i] = a[j];
// 					a[j] = temp;
// 				}
// 			}
// 		}
//
// 		printf("Ascending sorting: ");
// 		for (i = 0; i < temp2; i++){
// 			printf("%d, ", a[i]);
// 		}
//
// 		printf("Descending sorting: ");
// 		for (i = temp2-1; i >= 0; i--){
// 			printf("%d, ", a[i]);
// 		}
// }
