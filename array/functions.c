#include <stdio.h>
#include "functions.h"

void aSum(int n, int a[]){
	int i, sum=0;
	for (i = 0; i < n; i++){
    	sum = sum + a[i];
	}
	printf("\nSum: %d\n", sum);
}