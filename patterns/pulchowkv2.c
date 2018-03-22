#include <stdio.h>

int main(){
    char a[] = "pulchowk";

    for(int i=0; i<8; i++){
        for(int j=7; j>i; j--){
            putchar(' ');
        }
        for(int j=7-i; j<8; j++){
            putchar(a[j]);
        }
        putchar('\n');
    }
}
