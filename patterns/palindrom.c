#include <stdio.h>

int main() {

	int num, r, sum=0, t;

	num = 21212;

	for(t=num; num!=0; num=num/10){
		r = num%10;
		sum = sum*10+r;
		printf("%d\n", sum);
	}


	if(t==sum) {
		printf("palindrome\n");
	}else {
		printf("nope\n");
	}

	return 0;
}