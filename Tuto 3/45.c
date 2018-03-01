#include "stdio.h"
int main(){  //user defined function with predefined prototypes
		int a[200],i,n,count=0,j=0,sum=0;
		float average;
		printf("how many integers do you want to enter: ");
		scanf("%d",&n );

		printf("enter any %d numbers: ",n);
		for(i=0;i<n;i++){
				scanf("%d",&a[i]);
		}
		while(count!=5){
			  if(a[j]>0){
				    sum=sum+a[j];
				    ++count;
			  }
			  ++j;
		}
		printf("\nsum=%d",sum);
		average=(float)sum/5;
		printf("\naverage of the five positive number is: %.2f",average);
		return 0;
}
