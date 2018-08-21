#include <stdio.h>
#include <ctype.h>

int main(){

  char a[5] = {'N', 'E', 'P', 'A', 'L'};

  int i, j, k=1;

  for(i=0; i<5; i++){
    for(j=0; j<i+1; j++){
      // if ((i%2==0 || j%2!=0)) {
      //   putchar(toupper(a[j]));
      // }else{
      //   putchar(tolower(a[j]));
      // }
      // printf("%d %d\t", i, j);

      if((j%2==0 && i%2==0) || (j%2!=0 && i%2!=0)){
        putchar(toupper(a[j]));
      }else{
        putchar(tolower(a[j]));
      }

    }
    putchar('\n');
    k+=2;
  }


  return 0;
}
