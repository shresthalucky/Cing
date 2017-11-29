#include <stdio.h>

int main(){

	int n=100, i=1, a=0, b=1, x;

	// scanf("%d", &count);

	for (i; i < n; ++i)
	{
		printf("%d, ", a);
		x = a+b;
		a=b;
		b=x;
	}

	
	// while(nxt<=34){
	// 		printf("%d, ", t1);
	// 	nxt = t1+t2;
	// 	t1=t2;
	// 	t2=nxt;
	// }

	return 0;
}