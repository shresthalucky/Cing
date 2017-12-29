#include<stdio.h>
#include<stdlib.h>

void pattern();
void prime();
void print(int min, int max);

int main(){
	int x;
	prime();
	printf("\n");
	pattern();
	return 0;
}

void pattern(){
	int i,j,x=1;
	for (i=0; i<=4; i++){
		for (j=4; j>i; j--){
			printf(" ");
		}
		for (j=0; j<x; j++){
			if(j%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
		x+=2;
	}
} 

void prime(){
	 int min, max, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &min, &max);
	printf("Prime numbers between %d and %d are: ", min, max);
	print(min, max);
}

void print(int min, int max){
	int flag=0, i;
	min++;
	while (min < max)
    {
        flag = 0;
		for(i = 2; i <= min/2; ++i)
        {
            if(min % i == 0)
            {
                flag = 1;
                break;
            }
        }
		if (flag == 0)
            printf("%d ", min);
        ++min;
    }
}