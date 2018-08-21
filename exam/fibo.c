#include <stdio.h>

int prime(int n){
  int i;
  if(n<=1) return 0;
  if(n%2==0 && n > 2) return 0;
  for(i=3; i<=n/2; i+=2){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

int fib(int n){
  int a=0, b=1, c=0;
  for(int i=0; i<n-1; i++){
      printf("%d\n", c);
    a = b;
    b = c;
    c = a+b;
  }
  return c;
}

int main(){
  int a;
  a = fib(6);

  if(prime(a) == 1){
    printf("%d is prime", a);
  }else{
    printf("%d is not prime", a);
  }


  return 0;
}
