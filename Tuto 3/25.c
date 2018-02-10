#include <stdio.h>

int main(){
    int n, odd=0, even=0;

    while(n != -1){
        printf("Enter number : ");
        scanf("%d", &n);

        if(n%2 == 0){
            ++even;
        }else if(n != -1){
            ++odd;
        }
    }
    printf("Even = %d\nOdd = %d\n", even, odd);
}
