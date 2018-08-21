#include <stdio.h>

int main(){

  int n = 12, i, j, k=1;

  for(i=0; i<n; i++){
    for(j=n-1; j>i; j--){
      printf(" ");
    }
    for(j=0; j<k; j++){
      if((j==0)||j==(k-1)||i==n-1||j==i){
        printf("*");
      }else{
        printf(" ");
      }
    }
    k+=2;
    printf("\n");
  }

  k=(2*n)-3;

  for(i=0; i<n; i++){
    for(j=0; j<i+1; j++){
      printf(" ");
    }
    for(j=0; j<k; j++){
      if((j==0)||j==(k-1)||j==(k/2)){
        printf("*");
      }else{
        printf(" ");
      }
    }
    k-=2;
    printf("\n");
  }

  return 0;
}
