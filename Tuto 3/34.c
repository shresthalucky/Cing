#include <stdio.h>
#include <math.h>

int main(){

  float x1, x2, y1, y2, D;

  printf("Enter x1 y1: ");
  scanf("%f %f", &x1, &y1);

  printf("Enter x2 y2: ");
  scanf("%f %f", &x2, &y2);

  if(x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0){
    D = sqrt((pow((x2-x1), 2) + pow((y2-y1), 2)));
    printf("\nDistance between (%.2f, %.2f) and (%.2f, %.2f) is %f units", x1, y1, x2, y2, D);
  }else {
    printf("Invalid points");
  }

  return 0;
}
