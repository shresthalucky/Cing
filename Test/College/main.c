#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){
  int temp;
  char n[10];
  do{
    printf("What funtion do you want to use? \n1.Type 00\n2.Type 01\n3.Type 10\n4.Type 11\nEnter the value:\t");
    scanf("%s", n);
    temp = atoi(n);
  }while(temp == 0);

  switch (temp) {
    case 1 : largenum00();
    break;
    case 2 :
      printf("Enter Three Numbers:\t");
      scanf("%d %d %d", &a,&b,&c);
      largenum01(a,b,c);
      break;
    case 3 :
      printf("%d is the largest.", largenum10(a,b,c));
      break;
    case 4 :
      printf("Enter Three Numbers:\t");
      scanf("%d %d %d", &a,&b,&c);
      printf("%d is the largest.", largenum11(a,b,c));
      break;
    default : printf("Enter Correct Value!\n"); main();
  }
  return 0;
}

void checknum1(int a, int b, int c){
  if (a>b){
    if (a>c){
      printf("%d is the largest.", a);
    }
    else{
      printf("%d is the largest.", c);
    }
  }
  else if (b>c){
    printf("%d is the largest.", b);
  }
  else{
    printf("%d is the largest.", c);
  }
}

int checknum2(int a, int b, int c){
  if (a>b){
    if (a>c){
      return(a);
    }
    else{
      return(c);
    }
  }
  else if (b>c){
    return(b);
  }
  else{
    return(c);
  }
}

void largenum00(){
    do{
      printf("Enter Three Numbers:\t");
    }while(scanf("%d %d %d", &a,&b,&c) == 0);
    checknum1(a,b,c);
}

void largenum01(int a,int b,int c){
  checknum1(a,b,c);
}

int largenum10(){
  printf("Enter Three Numbers:\t");
  scanf("%d %d %d", &a,&b,&c);
  return checknum2(a,b,c);
}

int largenum11(int a, int b, int c){
  return checknum2(a,b,c);
}
