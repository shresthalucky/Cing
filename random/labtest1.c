#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void prog1();
void prog2();
void prog3();
void prog4();
void prog5();
void prog6();
void prog7();
void prog8();
void prog9();
void prog10();
void prog11();
void prog12();

int main(){
  char opt[2];
  int temp;
  printf("Enter the queston number : ");
  do{
    scanf("%s", opt);
    temp = atoi(opt);
  }while(temp<=0 || temp>12);
  printf("%d\n", temp);
  switch(temp){
  case 1 : prog1();
  break;
  case 2 : prog2();
  break;
  case 3 : prog3();
  break;
  case 4 : prog4();
  break;
  case 5 : prog5();
  break;
  case 6 : prog6();
  break;
  case 7 : prog7();
  break;
  case 8 : prog8();
  break;
  case 9 : prog9();
  break;
  case 10 : prog10();
  break;
  case 11 : prog11();
  break;
  case 12 : prog12();
  }
  return 0;
}

void  prog1() {
  int n;
  printf("Enter the number of lines : ");
  scanf("%d", &n);
  while(n>0){
    printf("Welcome to C\n");
    --n;
  }
}

void prog2(){
  int sum=0,i,n,num;
  float avg;
  printf("Enter the number of inputs number: \t");
  scanf("%d", &n);
  printf("Enter %d numbers :\n", n);
  for (i=0;i<n;i++){
    scanf("%d", &num);
    sum += num;
  }
  avg = (sum/n);
  printf("Sum = %d\n", sum);
  printf("Average = %.2f\n", avg);
}

void prog3(){
  int n,i;
  long long fact;
  printf("Enter the number : ");
  scanf("%d", &n);
  fact = n;
  for (i=n-1; i>0; i--){
    fact *= i;
  }
  if (n==1 || n==0){
    printf("Factorial = 1");
  }
  else if (n<0){
    printf("Invalid input");
  }
  else {
    printf("Factorial : %lld\n", fact);
  }
}

void prog4(){
  int n,i,flag=0;
  printf("Enter the number : ");
  scanf("%d", &n);
  for (i=2; i<=n/2; i++) {
    if(n%i==0){
      flag = 1;
      break;
    }
  }
  if (flag==0){
    printf("Prime\n");
  }
  else {
    printf("Not prime\n");
  }
}

void prog5(){
  int num, sum = 0, rem, temp;
   printf("Enter a Number: ");
   scanf("%d", &num);
   temp = num;
   while(num > 0)
   {
       rem = num%10;
       sum = (sum*10) + rem;
       num = num/10;
   }
   printf("Reverse of %d : %d\n", temp, sum);
}

void prog6(){
  int num, sum = 0, rem, temp;
   printf("Enter a Number:\t");
   scanf("%d", &num);
   temp = num;
   while(num > 0)
   {
       rem = num%10;
       sum = (sum*10) + rem;
       num = num/10;
   }
   if (temp == sum){
     printf("Palindrome\n");
   }
   else{
     printf("Not Palindrome\n");
   }
}

void prog7(){
  int n, t, sum = 0, remainder;
     printf("Enter an integer : ");
     scanf("%d", &n);
     t = n;
     while (t != 0)
     {
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
     }
     printf("Sum of digits of %d = %d\n", n, sum);
}

void prog8(){
  int num, sum = 0, rem, temp, first, last;
   printf("Enter a Number: ");
   scanf("%d", &num);
   last = num%10;
   temp = num;
   while(num > 0)
   {
       rem = num%10;
       sum = (sum*10) + rem;
       num = num/10;
   }
   first = sum%10;
   printf("Sum = %d \n", (first+last));
}

void prog9(){
  int number, originalNumber, remainder, result = 0, n = 0 ;

    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
}

void prog10(){
  int  a = 0, b = 1, c, limit, count = 0;

    printf("Enter the limit to generate the Fibonacci Series : ");
    scanf("%d", &limit);
    printf("Fibonacci Series is :\n");
    while (count < limit)
    {
        count++;
        printf(" %d |", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void prog11(){
  int n, sum = 0, i;
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  for (i=1; i<=n; i++){
    sum += i*pow((-1), (i-1));
  }
  printf("The sum is : %d\n", sum);
}

void prog12(){
  int i,n;
  float  a=1,b=2,c=3,sum = 0;
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  for (i=1; i<=n; i++){
      sum += (((c*a)+b)/c)*pow((-1), (i-1));
      a++;
      b++;
      c++;
  }
  printf("The sum is : %.2f\n", sum);
}
