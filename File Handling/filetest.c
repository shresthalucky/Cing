#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch[10], c, t[10];
	FILE *f1, *f2;
	f1 = fopen("test1.txt", "w+");
	f2 = fopen("test2.txt", "w+");

	printf("Enter a string to write in file1 : ");
	scanf("%[^\n]", ch);
	fprintf(f1, "%s\n", ch);
	fflush(stdin);
	rewind(f1);
	while(!feof(f1)){
			c=fgetc(f1);
			fputc(c,f2);
	}
	rewind(f2);

	while((c=fgetc(f2)) != EOF){
			printf("%c", c);
	}

	fclose(f1); fclose(f2);
	return 0;
}