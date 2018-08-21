#include <stdio.h>

int hcf(int a, int b){
  int c;
  c = b;
  if(a%b==0){
    return c;
  }else{
    c = a%b;
    return (hcf(b, c));
  }
}

int main(){
  int a, b, c;

  a =10;
  b =2;

  c = b;
  while(a%b!=0){
    c = a%b;
    a = b;
    b = c;
  }

  printf("%d", c);

  printf("\n%d", hcf(10, 2));

  return 0;
}
