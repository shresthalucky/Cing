#include <stdio.h>

int main(){
	int a, b, min=7, max=20, flag=0;


	while(min<max){
		// printf("asf\n");
		for(a=2; a<=min/2; a++){
			// printf("asgas\n");
			if((min%a)==0){
				//printf("%d\n", a);
				flag=1;
				break;
			}
		}
		
		// printf("%d\n", a);
		
		if(flag==0){
			printf("%d\n", min);
		}
		min++;
	}

	return 0;

}