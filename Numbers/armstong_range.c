#include <stdio.h>

int main(){
    int min, max, temp, sum, rem;
    printf("enter min max : ");
    scanf("%d %d", &min, &max);
    while(min<max){
        temp = min;
        sum = 0;
        while(temp>0){
            rem = temp%10;
            sum = sum + (rem*rem*rem);
            temp/=10;
        }
        if(sum == min){
          printf("%d ", sum);
        }
        min++;
    }
}
