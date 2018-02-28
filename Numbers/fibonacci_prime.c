//WAP to find out nth term of fibonacci series is a prime number or not. Read
//the value of n from the user and display the result in the main function.
//Use seperate function to genereate the nth fibonacci term and to check whether
//a number is prime or not.
#include <stdio.h>

int prime(int);
int fib(int);

int main(){
  int n, r;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  r = fib(n);
  if(r==1) printf("Prime");
  else printf("Not prime");
  return 0;
}

int prime(int a){
    int i, flag = 1;
    for(i=2; i<a/2; i++){
        if((a%i)==0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int fib(int n){
    int sum=0, i, a=0, b=1, c;
    for(i=0; i<n; i++){
      sum=a;
      c=a+b;
      a=b;
      b=c;
    }
    printf("%dth fibonacci number is : %d\n", n,sum);
    return (prime(sum));
}
