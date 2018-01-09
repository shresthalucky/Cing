#include<stdio.h>

int factorial(int n);

int main()
{
    int a,b;
    printf("Enter the number to make factorial of : ");
    scanf("%d", &a);
    b=factorial(a);
    printf("The factorial of %d is %d", a,b);
    return 0;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
