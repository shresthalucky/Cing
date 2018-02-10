// WAP in C to print the multiplication table of a number. (Number given by user)

#include <stdio.h>

int main(){
  int n, i, j;

  printf("Enter number: ");
  scanf("%d", &n);

  for(i=0; i<10; i++){
    for (j=0; j < 2; j++) {
      if(j==0){
        printf("%d\t", i+1);
      }else{
        printf("%d", ((i+1)*n));
      }
    }
    printf("\n");
  }

  return 0;
}
