#include <stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(i=0; i<2; i++){
      for(j=0; j<n; j++){
          for(k=0; k<=j; k++){
              printf("%c ", 1);
          }
          printf("\n");
      }
    }
}
