#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  float a,b,c,d;
  float r1, r2, real;

  scanf("%f %f %f", &a, &b, &c);
  d = (b*b)-(4*a*c);

  if(d==0){
    printf("equal\n");
    r1 = -b/(2*a);
    printf("%f\n", r1);
  }else if(d>0){
    r1 = (-b+sqrt(d))/(2*a);
    r2 = (-b-sqrt(d))/(2*a);
    printf("%f %f\n", r1, r2);
  }else if(d<0){
    real = -b/(2*a);
    r1 = sqrt(abs(d));
    printf("%.2f+%.2f\n", real, r1);
    printf("%.2f-%.2f\n", real, r1);
  }




  return 0;
}
