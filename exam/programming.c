#include <stdio.h>
#include <ctype.h>

int main(){

  char a[11] = "Programming";

  int i, j, k=11, x=0;

  for(i=0; i<6; i++){
    for(j=x; j<k; j++){
      putchar(a[j]);
    }
    putchar('\n');
    k--;
    x++;
  }

  return 0;
}
