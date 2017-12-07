#include<stdio.h>

int noOfDigits(int n);
int main()
{
  int n,ctr;
    printf(" Input  a number : ");
    scanf("%d",&n);

    ctr = noOfDigits(n);

    printf(" The number of digits in the number is :  %d \n\n",ctr);
    return 0;
}

int noOfDigits(int n)
{
    static int ctr=0;

     if(n!=0)
     {
          ctr++;
         noOfDigits(n/10);
    }

    return ctr;
}
