#include <stdio.h>
#include <string.h>

float average();

int main(){
		char opt[3];
		float y;
		do{
				printf("Call function?(yes/no) : \t");
				scanf("%s", opt);
				if((strcmp(opt, "yes") == 0)){
						y = average();
				}
		}while((strcmp(opt, "yes") == 0));
		printf("Average = %.2f", y);
		return 0;
}

float average(){
		static int count=0, sum=0;
		int x;
		++count;
		printf("Enter number :\t");
		scanf("%d", &x);
		sum += x;
		return((float)sum/(float)count);
}