#include <stdio.h>
#include <math.h>
int main(){
    float pi, sum=0.0;
    int i, a=1;

    for(i=0; i<25; i++){
          printf("%d. a=%d sum=%.2f\n",i+1, a, sum);
          sum += pow(-1,(float)i)*1/(float)a;
          a+=2;

    }
    sum*=4;
    printf("sum = %f", sum);
}
