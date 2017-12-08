#include <stdio.h>

void main() {

	int i,j;

	char str[1000];
	printf("Enter Any Character : ");
	scanf ("%[^\n]%*c", str);
	char *pointer;

	pointer = str;

	for (i=0; pointer[i]; i++){
		for (j=0;j<=i;++j) {
			printf("%c", pointer[j]);
		}
		printf("\n");
	}
}
