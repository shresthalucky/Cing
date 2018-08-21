#include <stdio.h>

int prime(int n){
  int i;
  if(n<2) return 0;
  if(n%2==0 && n>2) return 0;
  for(i=3; i<=n/2; i+=2){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int min, max, i;

  scanf("%d %d", &min, &max);

  for(i=min+1; i<max; i++){
    printf("%d %d\n", i, prime(i));
  }




  return 0;
}
