#include <stdio.h>

int *name(int a[3][3], int b[3][3]) {
  static int s[3][3];

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      s[i][j] = a[i][j] + b[i][j];
    }
  }

  // for(int i=0; i<3; i++){
  //   for(int j=0; j<3; j++){
  //     printf("%d\t", s[i][j]);
  //   }
  //   printf("\n");
  // }

  return (&s);
}

int main(){

  int a[3][3] = {{1,2,3}, {3,4,5}, {4,5,6}};
  int b[3][3] = {{2,345,5}, {2,4,5}, {5,6,7}};
  int *p;

  p = name(a, b);

  for(int i=0; i<9; i++){
    if(i%3==0){
      printf("\n");
    }
    printf("%d\t", *(p+i));
  }

  // printf("%d", *(p+1));


  return 0;
}
