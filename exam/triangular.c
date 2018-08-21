#include <stdio.h>

int triangular(int n){
  int static sum = 0;
  if(n==0){
    return 0;
  }
  sum = sum + n;
  triangular(n-1);
  return sum;
}

int main(){

  int n = 6;
  int i, sum=0;

  for(i=1; i<=n; i++){
    sum = sum + i;
    if(sum == n){
      break;
    }
  }

  printf("%d\n", sum);
  printf("%d\n", triangular(n));

  if(sum == n){
    printf("triangular\n");
  }else{
    printf("not\n");
  }


  return 0;
}
