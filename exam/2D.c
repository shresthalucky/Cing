#include <stdio.h>

void array(int *a){

  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      printf("%d\t", *((a+i*2) + j));
    }
    printf("\n");
  }

}

void swap(int *a, int *b){

  int c;
  c = *a;
  *a = *b;
  *b = c;
}


int main(){
  int a[2][2] = {{1,2},{3,4}};
  int *p;
  // p = &a;
  // array(p);

  int x = 1, b=2;
  swap(&x, &b);
  printf("%d %d\n", x, b);

  return 0;
}
