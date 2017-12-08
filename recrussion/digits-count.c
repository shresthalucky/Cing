#include<stdio.h>

int noOfDigits(int n);
int reverse(int n);
int main()
{
  int n;
  printf("Input a number: ");
  scanf("%d",&n);

  printf("The number of digits in the number is:  %d \n", noOfDigits(n));
  printf("Reversed number: %d\n", reverse(n));

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

int reverse(int n) {
    
    static int rem, rev=0;

    if(n){
        rem = n%10;
        rev = rev*10 + rem;
        reverse(n/10);
    }

    return rev;
}