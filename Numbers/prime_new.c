#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n){
	if(n<2 && n>0) return 1;

	for(int i=3; i < sqrt(n) + 1 ; i+=2){
		if(n%i == 0) return 0;
	}

	return 1;
}

int main(){
	int x;
	printf("Enter a number : ");
	scanf("%d", &x);

	if(isPrime(x)==1) printf("Prime\n");
	else printf("Not prime\n");
	return 0;
}