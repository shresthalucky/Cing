// WAP in C to accept three digits (0-9) and print all possible combinations from these
// digits. (For example, if three digits are 2, 3 and 5 then all possible combinations are
// 235, 253, 325, 352, 523, and 532).
#include <stdio.h>

int main(){

  int n=3, i, digit[n], temp, j, k;

  for(i=0; i<n; i++){
    printf("number %d: ", i+1);
    scanf("%d", &digit[i]);
  }

  for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){

      temp = digit[j];
      digit[j] = digit[j+1];
      digit [j+1] = temp;

      for(k=0; k<n; k++){
        printf("%d ", digit[k]);
      }
      printf("\n");
    }
}
  return 0;
}
