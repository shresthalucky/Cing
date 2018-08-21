#include <stdio.h>
#include <string.h>

int main(){

  char s[100] = "asdfg";
  char c[20] = "MIDDFEG";
  char n[200];
  int i, j, k=0, t, p=2, space, o=p;

  t = strlen(s) + strlen(c);
  space = strlen(c);

  printf("%d\n", t);

  for(i = 0; i<t; i++){
    if(i>=p && i<=(p+space)-3){
        n[i] = c[k];
        k++;
    }else if(i>(p+space)){
      n[i] = s[4];
      o++;
    }else{
      n[i] = s[i];
    }
  }

  n[i] = '\0';

  // printf("%d\n", strlen(n));
  printf("%s\n", n);


  return 0;
}
