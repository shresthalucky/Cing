#include <stdio.h>
long long int factorial(int x){
      int i,fact=1;
      for(i=1;i<=x;i++)
      {
        fact=fact*i;
      }
      //printf("fact=%d\n",fact);
      return (fact);
}

long long int power(int y,int z){
      int i,mul=1;
      for(i=1;i<=z;i++)
      {
        mul*=y;
      }
      //printf("mul=%d\n",mul);
      return (mul);
}

int main(){
      int a,n;
      long long int b,c;
      float F;
      printf("Enter the value of a,b,c,n:");
      scanf("%d%lld%lld%d",&a,&b,&c,&n );
      c=factorial(c);
      b=power(b,n);
      F=(((float)a*(float)b)/(float)c);
      printf("\nThe value of F is = %f",F);
      return 0;
}
