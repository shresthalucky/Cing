#include <stdio.h>
void main() {
   char a[]="Khwopa";
   int i,j;
   for(i=5; i>=0; i--){
      for(j=0;j<i;j++){
          putc(' ', stdout);
      }
      for(j=i;j<=5;j++){
          putc(a[j], stdout);
      }
      putc('\n', stdout);
   }
}
