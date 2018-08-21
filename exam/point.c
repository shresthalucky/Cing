#include <stdio.h>

int main(){

  int k;
  int a[] = {1, 2, 3};
  int *x=&a;

  int s = 1;

  int *b[3];
  int **c[3];
  int ***d[3];
  int ****e[3];
  int *****f[3];

  b[0] = &s;
  c[0] = &b[0];
  printf("%d\n", *b[0]);

  for(k=0; k<3; k++){
    b[k] = a+k;
    c[k] = b+k;
    d[k] = c+k;
    e[k] = d+k;
    f[k] = e+k;
  }

  for(k=0; k<3; k++){
    printf("%d ", *b[k]);
    printf("%d ", **c[k]);
    printf("%d ", ***d[k]);
    printf("%d ", ****e[k]);
    printf("%d ", *****f[k]);
    printf("\n");
  }

  // printf("%d\n", &a[0]);
  // printf("%d\n", &a[1]);
  // printf("%d\n", x);


  return 0;
}
