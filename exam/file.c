#include <stdio.h>

int main(){

  char s[6], c;

  FILE *f1;
  FILE *f2;

  f1 = fopen("a.txt", "w+");
  f2 = fopen("b.txt", "w+");
  // scanf("%[^\n]", s);
  // fprintf(f1, "%s", s);


  while((c=getchar())!='\n'){
    fputc(c, f1);
  }

  rewind(f1);

  while(!feof(f1)){
    c = fgetc(f1);
    putchar(c);
    fputc(c, f2);
  }

  fclose(f1);
  fclose(f2);




  return 0;
}
