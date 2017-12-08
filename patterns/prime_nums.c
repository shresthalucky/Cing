#include <stdio.h>

int main(){
	int a, b, min, max, flag=0;

	printf("Enter The intervals [Min, Max]: ");
	scanf("%d %d", &min,&max);

	while(min<max){
		flag=0;

		for(a=2; a<=min/2; a++){
			if((min%a)==0){
				flag=1;
				break;
			}
		}

		if(flag==0){
			printf("%d\n", min);
		}
		min++;
	}

	return 0;

}
