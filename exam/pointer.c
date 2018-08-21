#include <stdio.h>

int main(){

  int a[3] = {1, 12, 5}, l, temp;

  l = *(a);

  for(int i=0; i<3; i++){
    for(int j=i+1; j<3; j++){
      if(*(a + i) < *(a + j)){
        temp = *(a + i);
        *(a + i) = *(a + j);
        *(a + j) = temp;
      }
    }
  }

  printf("second largest:%d", *(a+1));



  return 0;
}
