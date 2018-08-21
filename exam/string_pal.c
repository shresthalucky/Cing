#include <stdio.h>
#include <string.h>

int main(){

  char s[20];
  scanf("%s", s);
  char p[20];
  int i;
  int l=0;
  // int l = strlen(s);
  int d = l;
  i=0;
  while(s[i]!='\0'){
    l++;
    i++;
  }

  printf("%d\n", l);
  // for(i=0; i<l; i++){
  //   p[i] = s[d-1];
  //   d--;
  // }

  int k=0;

  for(i=l-1; i>=0; i--){
    // printf("%d\n", i);
    p[k] = s[i];
    k++;
  }

  p[k] = '\0';


  printf("%s %s", s, p);

  if(strcmp(s, p) == 0){
    printf("palindrom\n");
  }

  return 0;
}
