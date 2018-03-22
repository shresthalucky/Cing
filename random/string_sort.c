#include <stdio.h>
#include <string.h>

void *sort(char n[3][10]){

  char temp[10];

  for(int i=0; i<3-1; i++){
    for(int j=i+1; j<3; j++){

      if(strcmp(n[i], n[j])>0){
          strcpy(temp, n[j]);
          strcpy(n[j], n[i]);
          strcpy(n[i], temp);
      }
    }

  }
  return n;
}

int main(){

  char name[3][10] = {"this", "is", "cool"};
  char (*p)[3][10];
  p = sort(name);

  for(int i=0; i<3; i++){
    printf("%s\n", *(*p+i));
  }

  return 0;
}
