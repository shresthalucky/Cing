#include <stdio.h>
#include <ctype.h>

int main(){

  char a[6] = "khwopa";
  int i, j, x=5;

  for(i=0; i<6; i++){
    for(j=6; j>i; j--){
      putchar(' ');
    }
    for(j=x; j<6; j++){
      putchar(a[j]);
    }
    putchar('\n');
    x--;
  }
  return 0;
}
