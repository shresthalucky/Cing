#include <stdio.h>

int main(){
	int num=199, flag=0, a;

	for(a=2; a<=num/2; a++){
		if((num%a)==0){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		printf("prime\n");
	}else {
		printf("not prime\n");
	}

	return 0;
}