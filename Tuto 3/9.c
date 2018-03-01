#include <stdio.h>

int main(){
  int i,j;
  float a[3],temp;
  for (i=0; i<3; i++){
      printf("Enter number %d: ", i+1);
      scanf("%f", &a[i]);
  }
  for(i=0; i<3; i++){
     for(j=i; j<3; j++){
          if(a[i]>a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
      }
  }
  printf("%.2f is the smallest\n", a[0]);
  printf("%.2f is the largest\n", a[2]);
  return 0;
}
