#include <stdio.h>
#include <string.h>

int main(){
		int n,sum=0,count=0;
		float avg;
		char opt[2];
		do{
				printf("Enter a number : ");
				scanf("%d", &n);
				if((n%4==0) && (n>10 && n<50)){
						sum+=n;
						count++;
				}
				printf("Do you want to continue?(yes/no) : ");
				scanf("%s", opt);
				fflush(stdin);
		}while((strcmp(opt, "no"))!=0);
		avg = (float)sum/(float)count;
		printf("Count = %d\nAverage = %.2f", count, avg);
		return 0;
}