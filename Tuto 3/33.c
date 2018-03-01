#include <stdio.h>

float sum(int n);

int main(){
  int n;

  printf("Enter number of terms: ");
  scanf("%d", &n);
  printf("Sum = %.2f", sum(n));

  return 0;
}

float sum(int n){
  float a=2, b=3, c=5, i;
  float sum=0;
  for(i=0; i<n; i++){
    // printf("%f %f %f\n", a, b, c);
    sum += a*(b/c);
    a+=2;
    b+=2;
    c+=2;
    // printf("loop sum : %.2f\n", sum);
  }
  // printf("Final same : %.2f\n", sum);
  return sum;
}
