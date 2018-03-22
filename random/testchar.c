#include <stdio.h>
int checkchar(char b[100]){
		int flag=0, j=65, k = 97;
		for(int i=0; b[i]!='\0'; i++){
				while(j<91 && k<123){
						if(b[i]==j || b[i]==k){
								flag++;
						}
						j++; k++;
				}
		}
		return flag;
}
int main(){
		char a[100];
		int flag;
		printf("Enter a string : ");
		scanf("%s", a);
		flag = checkchar(a);

		if(flag!=0){
				printf("Contains alphabet\n");
		}else{
				printf("No alphabet\n");
		}
}