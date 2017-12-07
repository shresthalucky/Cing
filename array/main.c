#include <stdio.h>
#include "functions.h"

int main(){
  int a[50], n, i, j, temp;

  printf("How many ints?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
  	printf("Enter number %d: ", i+1);
  	scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++){
  	for (j=i+1; j < n; j++){
  		if (a[i] > a[j])
  		{
  			temp = a[i];
  			a[i] = a[j];
  			a[j] = temp;
  		}
  	}
  }

  printf("Ascending sorting: ");
  for (i = 0; i < n; i++){
  	printf("%d, ", a[i]);
  }

  printf("Descending sorting: ");
  for (i = n-1; i >= 0; i--){
  	printf("%d, ", a[i]);
  }

  // aSum(n, a);

  return 0;
}
