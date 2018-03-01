// WAP in C to generate multiplication table of 1 to 10.

#include <stdio.h>

int main(){

  int i, j;

  for(i=0; i<11; i++){
    for(j=0; j<11; j++){
      if(i==0){
        printf("%3d", j);
      }else{
        if (j==0) {
          printf("%3d", i);
        }else {
          printf("%3d", i*j);
        }
      }
    }
    printf("\n");
  }

  return 0;
}
