#include <stdio.h>

int main(){
  int n, sum;

  printf("Enter number: ");
  scanf("%d", &n);

  while(n>9){
    sum = 0;
    while (n>0) {
      sum = sum + (n%10);
      n = n/10;
    }
    printf("Sum: %d\n", sum);
    n = sum;
  }

  return 0;
}
