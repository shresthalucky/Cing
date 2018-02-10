#include <stdio.h>
int hcf(int a ,int b){
    int i,high;
    for(i=1;i<=a && i<=b;i++){
          if (a%i==0 && b%i==0)
                high=i;
        }
    return (high);
}

int lcm(int a,int b){
    int i,lowest;
    if (a>b){
      lowest=a;
    }
    else{
      lowest=b;
    }
    while(1){
      if (lowest%a==0 && lowest%b==0)
      break;
      ++lowest;
    }
    return (lowest);
}


int main(){
      int num1,num2;
      printf("enter the two numbers:");
      scanf("%d%d",&num1,&num2 );
      if(num1%2==0 && num2%2==0){
          hcf(num1,num2);
          printf("the hcf of the %d and %d is: %d",num1,num2,hcf(num1,num2));
      }else{
          lcm(num1,num2);
          printf("the lcm of the %d and %d is: %d",num1,num2,lcm(num1,num2));
      }
      return 0;
}
