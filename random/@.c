#include <stdio.h>

int main(){

  int n=5, i, j, k=1;

  for(i=0; i<(n/2)+1; i++){
    for(j=(n/2)+1; j>i; j--){
      putchar(' ');
      putchar(' ');
    }
    for(j=0; j<k; j++){
      putchar('@');
      putchar(' ');
    }
    putchar('\n');
    k+=2;
  }

  k = (n/2)+1;

  for(i=0; i<(n/2); i++){
    for(j=0; j<(i+1); j++){
      putchar(' ');
      putchar(' ');
      putchar(' ');
      putchar(' ');
    }
    for(j=0; j<k; j++){
      putchar('@');
      putchar(' ');
    }
    putchar('\n');
    k-=2;
  }


  return 0;
}
