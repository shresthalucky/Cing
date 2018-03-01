#include <stdio.h>
#include <ctype.h>

int main(){

  char a[11] = "PULCHOWK";

  int i, j;

  for(i=0; i<8; i++){
    for(j=0; j<i+1; j++){
      if((j%2!=0 || (i==6 && j==0))){
        if(i==3 || i==5 || i==7){
          putchar(a[j]);
        }else{
          putchar(tolower(a[j]));
        }
      }else{
          putchar(a[j]);
      }
    }
    putchar('\n');
  }


  return 0;
}
