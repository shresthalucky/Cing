#include <stdio.h>
#include <math.h>

int fact(int n){
  static int f=1;
  if(n>0){
    f = n * fact(n-1);
  }
  return f;
}

int arm(int n){
  static int sum =0;
  if(n>0){

    sum = sum + pow(n%10, 3);
    n = n/10;
    arm(n);

  }
  return sum;
}

int main(){

  // printf("%d", fact(4));
  printf("%x", arm(153));

  return 0;
}
