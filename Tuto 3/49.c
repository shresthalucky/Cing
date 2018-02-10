#include<stdio.h>
#include<math.h>

int fact(int a){
  int f=1;
  for(int i= 0; i<a; i++){
    f = f*(i+1);
  }
  return f;
}


int main(){
    int i=1, x;
    long long int temp = 0;
    double sum =0;

    printf("x: ");
    scanf("%d", &x);

    while(!(temp>0)){
      sum = sum + (pow(x, i)/fact(i));
      i++;
      printf("Test sum : %f\n", sum);
      temp = sum * 1000000;
      temp %= 10;
      printf("%Test temp : %ld\n", temp);
    }
    printf("%f\n", sum);

return 0;
}

// int main(){
//   int x;
//   printf("Enter value of x :");
//   scanf("%d", &x);
//   printf("%.6f", exp(x));
//   return 0;
// }