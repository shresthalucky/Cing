#include <stdio.h>
#include <math.h>

void main(){
  int n,i,temp,digits=0,sum=0;
  printf("Enter a number : \t");
  scanf("%d", &n);
  temp = n;
  while(temp>0){
    temp/=10;
    ++digits;
  }
  temp = n;
  while(temp>0){
    sum += pow((temp%10),digits);
    temp/=10;
  }
  if (sum == n){
    printf("Armstrong\n");
  }
  else{
    printf("Not Armstrong\n");
  }
}
