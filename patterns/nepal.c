#include <stdio.h>

void main() {

	int i,j;
  // char n[5] = {'N','E','P','A','L'};
	char str[] = "THIS IS NEPAL";
	char *pointer;

	pointer = str;

	for (pointer[i]; i>=0; i--){
		for (j=0;j<=i;++j) {
			printf("%c", pointer[j]);
		}
		printf("\n");
	}
}
