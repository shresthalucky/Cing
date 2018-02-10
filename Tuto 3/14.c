// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
// three points fall on one straight line.
#include <stdio.h>

int main(){

  float x[3], y[3], a, b;
  int i;

  for(i=0; i<3; i++){
    printf("x%d y%d : ", i+1, i+1);
    scanf("%f %f", &x[i], &y[i]);
  }

  a = x[2]-x[0];
  b = ((y[1]-y[0])/(x[1]-x[0])) * (x[2] - x[0]);

  // printf("%f %f", a, b);

  if(a == b) {
    printf("Straight line");
  }else {
    printf("not Straight line");
  }

  return 0;

}
