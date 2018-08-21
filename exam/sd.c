#include <stdio.h>
#include <math.h>

int main(){

  int a[4] = {1,2,3,4}, i;
  float mean, sum=0;

  for(i=0; i<4; i++){
    sum = sum + a[i];
  }

  mean = sum/4;
  sum = 0;
  for(i=0; i<4; i++){
    sum = sum + pow((mean - a[i]), 2);
  }
  printf("%f\n", sqrt(sum/4));


  return 0;
}
