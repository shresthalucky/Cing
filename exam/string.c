#include <stdio.h>
#include <ctype.h>

int main(){
  int i;
  char s[6], a[6];


  scanf("%[^\n]", s);

  for(i=0; *(s+i)!='\0'; i++){

    printf("%d\n", islower(*(a+i)));

    if(islower(*(a+i))==0){
      *(a+i) = toupper(*(s+i));
    }else{
      *(a+i) = *(s+i);
    }

  }


  *(a+i) = '\0';

  printf("%s", a);


  return 0;
}
