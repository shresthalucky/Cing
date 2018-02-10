#include <stdio.h>

int prime(int n);

int main(){
  int n;
  printf("Input number: ");
  scanf("%d", &n);

  if(prime(n)==1){
    printf("Prime");
  }else {
    printf("Not Prime");
  }

  return 0;
}

int prime(int n){
  int i;
  if (n<=1 || (n%2==0 && n>2)) {
    return 0;
  }
  for(i=3; i<n; i+=2){
    if (n%i==0) {
      return 0;
    }
  }
  return 1;
}
