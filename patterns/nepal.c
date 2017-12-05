#include<stdio.h>

void main() {

  int i,j;
  char n[5] = {'N','E','P','A','L'};
  for (i=4;i>=0;i--){
    for (j=0;j<=i;++j) {
      printf("%c",n[j]);
    }
    printf("\n");
  }
}
