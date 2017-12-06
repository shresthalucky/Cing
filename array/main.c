#include <stdio.h>
#include "functions.h"

int main(){
  int a[50], i;

  printf("How many ints?\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++){
  	printf("Enter number %d: ", i+1);
  	scanf("%d", &a[i]);
  }

  aSum(n, a);

  return 0;
}