#include <stdio.h>
#include <math.h>
int main(){
    float i,n,x;
    float y=0.0;
    printf("Enter the valur of x and n:");
    scanf("%f %f",&x,&n);
    for(i=1;i<=n;i++)
    {
          y+= pow(-1,i-1)*(i/pow(x,i));
          // z=1.0;
          // for(j=1;j<=i;j++)
          // {
          //   z*=x;
          // }
          // y=y+((i/z)*v);
          // v*=-1;
    }
    printf("\nY=% f",y);
    return 0;
}
