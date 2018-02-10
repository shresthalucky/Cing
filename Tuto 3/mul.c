#include <stdio.h>

int main(){
  int n, i, j;

  printf("Enter number: ");
  scanf("%d", &n);

  for(i=1; i<=10; i++){
        printf("%d*%d = %d",n,i,(i*n));
    printf("\n");
  }
return 0;
}
