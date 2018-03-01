#include <stdio.h>

int main(){
    int i,j,k,temp,a[3]={1,2,3};

    for(i=0; i<3; i++){
      for(j=0; j<2; j++){
        for(k=0; k<3; k++){
          printf("%d", a[k]);
        }
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        printf("\n");
      }
  }
}
