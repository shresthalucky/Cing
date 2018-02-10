#include <stdio.h>

int main(){
  int i,j,k=1;
  printf("table 1\ttable 2\ttable 3\ttable 4\ttable 5\ttable 6\ttable 7\ttable 8\ttable 9\ttable 10\n");
  for(i=1; i<=10; i++){
    for (j=1;j<=10;j++) {
        //printf("%d*%d = %d",j,k,(j*k));
        printf("%d\t",(j*k));
    //printf("\t");
  }
  printf("\n");
  k++;
}
return 0;
}
