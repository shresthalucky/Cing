#include <stdio.h>
#include <string.h>

int main(){

  int n, sum=0, count=0;
  float average;
  char opt[2];

  do{
    printf("Enter Number: ");
    scanf("%d", &n);

    if((n%9==0) && (n%6!=0) && (n>1 && n<100)){
      sum = sum + n;
      count++;
    }else{
      printf("Not appropriate number\n");
    }

    printf("Continue? [YES/NO] ");
    scanf("%s", opt);
  }while((strcmp(opt, "NO") != 0);

  printf("Total appropriate numbers: %d\n", count);

  if(count>=1){
    average = sum/count;
    printf("Sum: %d \nAverage: %.2f", sum, average);
  }
  return 0;
}
