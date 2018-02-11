#include <stdio.h>
main() {
   char a[6]="Khwopa";
   int i,j;
   for(i=5; i>=0; i--){
      for(j=0;j<i;j++){
          putch(' ');
      }
      for(j=i;j<=5;j++){
          putch(a[j]);
      }
      putch('\n');
   }
}
