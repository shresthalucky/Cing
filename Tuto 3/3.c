// Write a program that will read the value of x
#include <stdio.h>

int main(){

  int x, y;

  printf("Enter value of X: ");
  scanf("%d", &x);

  // if(x>0 || x<0){
  //   y = 1;
  // }else if(x==0){
  //   y=0;
  // }

  y = (x>0 || x<0)? 1:0;

  printf("%d\n", y);

  return 0;
}
