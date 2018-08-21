#include <stdio.h>
#include <math.h>

int arm(int n){
  static int sum = 0;
  if(n==0){
    return sum;
  }
  sum = sum + pow(n%10, 3);
  arm(n/10);
}


int main(){

  // int min, max, i, temp, sum;
  //
  // scanf("%d %d", &min, &max);
  //
  // for(i=min; i<max; i++){
  //   temp = i;
  //   sum = 0;
  //   while(temp>0){
  //     sum = sum + pow(temp%10, 3);
  //     temp = temp/10;
  //   }
  //   if(sum == i){
  //     printf("%d ", i);
  //   }
  // }

  int n;
  scanf("%d", &n);
  printf("%d\n", arm(n));


  return 0;
}
