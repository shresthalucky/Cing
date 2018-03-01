#include <stdio.h>
#include <ctype.h>

int i, j;
int prime(int num) {
	if (num <= 1) return 0;
	if (num % 2 == 0 && num > 2) return 0;
	for(int i = 3; i < num / 2; i+= 2)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}


int main(){

	char a[8] = {'P','U','L','C','H','O','W','K'};

	for (i=1; i<=8; i++) {

		for (j=0; j<i; j++){

			if (j==1 || j==3 || j==5) {

				if (prime(i)==1) {
					printf("%c ", tolower(a[j]));					
				} else {
					printf("%c ", a[j]);
				}

			}else {

				if (i==7 && j==0) {
					printf("%c ", tolower(a[j]));
				} else {

					printf("%c ", a[j]);
				}

			}

		}
		
		printf("\n");
	}

	return 0;
}