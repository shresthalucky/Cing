#include <stdio.h>
int main(){
    int n,a,i,j,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n );
    for(i=1;i<=n;i++){
        a=1;
        for (j= 1; j<=(i+1);j++){
            a*=-1;
        }
        sum+=a*(i*i);
    }
    printf("\nThe sum of the %d terms is = %d",n,sum);
    return 0;
}
