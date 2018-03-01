#include <stdio.h>

int main(){
    int a,b,i,hcf,lcm;
    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);
    for(i=1; i<a || i<b; i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    lcm = (a*b)/hcf;
    printf("HCF = %d LCM = %d\n", hcf, lcm);
}
