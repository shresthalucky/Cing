#include <stdio.h>
#include <string.h>

struct book{
  char name[20];
  int num;
}b;

int main(){

  FILE *fp;
  fp = fopen("book", "wb");
  int i=0;
  int s;
  char opt='y';

  do{
    printf("Name Num: ");
    scanf("%s %d", b.name, &b.num);
    fwrite(&b, sizeof(b), 1, fp);
    printf("n/y");
    scanf(" %c", &opt);
    i++;
  }while(opt!='n');
  fclose(fp);

  i=0;
  fp = fopen("book", "rb");
  scanf("%d", &s);
  fseek(fp, (sizeof(b)*(s-1)), SEEK_SET);
  printf("%ld\n", ftell(fp));

  while(fread(&b, sizeof(b), 1, fp)==1) {
    printf("%s %d\n", b.name, b.num);
    break;
  }

  fclose(fp);



  return 0;
}
