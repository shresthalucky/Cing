#include <stdio.h>

void main() {

	int i,j;
  // char n[5] = {'N','E','P','A','L'};
	//char str[] = "THIS IS NEPAL";
	char str[1000];
	printf("Enter Ant Character : ");
	scanf ("%[^\n]%*c", str); //error fixed
	char *pointer

	pointer = str;

	for (i=0; pointer[i]; i++){
		for (j=0;j<=i;++j) {
			printf("%c", pointer[j]);
		}
		printf("\n");
	}
}
