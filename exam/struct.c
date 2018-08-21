#include <stdio.h>
#include<stdlib.h>

struct n{
  char name[20];
  int roll;
}e[4], temp;

int main(){
  int i, j;
  FILE *fp;
  fp = fopen("a", "wb+");

  for(i=0; i<4; i++){
    scanf("%s %d", e[i].name, &e[i].roll);
  }

  for(i=0; i<4; i++){
    for(j=i+1; j<4; j++){
      if((e[i].roll)>(e[j].roll)){
        temp = e[i];
        e[i] = e[j];
        e[j] = temp;
      }
    }
  }


  for(i=0; i<4; i++){
    fwrite(&e[i], sizeof(e[i]), 1, fp);
    // printf("%s %d\n", e[i].name, e[i].roll);
  }
  rewind(fp);
  i=0;
  while(fread(&e[i], sizeof(e[i]), 1, fp)){
    printf("%s %d\n", e[i].name, e[i].roll);
    i++;
  }

  fclose(fp);

  return 0;
}
