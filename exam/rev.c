#include <stdio.h>

int main(){

  int n = 2016, x, rev=0;

  ((n%4==0 && n%100!=0) || n%400 == 0) ? printf("leap") : printf("no");

  while(n>0){
    x = n%10;
    rev = rev*10 + x;
    n = n/10;
  }

  printf("%3.2d\n", rev);

  return 0;
}
