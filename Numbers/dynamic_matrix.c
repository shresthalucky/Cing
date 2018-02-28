/*WAP to read square matrix of dimention N, N and find sum of diagonals*/

#include <stdio.h>

void main(){
    int n, i, j, a[20][20],sum=0;
    printf("Enter the dimention of matrix : ");
    scanf("%d", &n);
    printf("Enter %dx%d matrix :\n", n,n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", (*(a+i)+j));
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((i==j)){
                sum+=a[i][j];
            }
            if(i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    printf("Sum = %d\n", sum);
}
