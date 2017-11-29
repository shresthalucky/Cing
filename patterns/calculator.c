#include <stdio.h>

int main(){

	int num1, num2, opt, result;

	printf("Enter two digits(seprated by space): ");
	scanf("%d %d", &num1, &num2);

	printf(	"Select the operation to perform: \n 1. Add \t 2. Subtraction \t 3. Multiplication \t 4. Division \n");

	scanf("%d", &opt);

	// switch(operation){
	// 	case 1:
	// 		printf("%d", result=num1+num2);
	// }

	if(opt==1){
		printf("%d", result=num1+num2);
	}else if(opt==2){
		printf("%d", result=num1-num2);
	}else if(opt==3){
		printf("%d", result=num1*num2);
	}else if(opt==4){
		printf("%d", result=num1/num2);
	}else {
		printf("Select 1 to 4");
	}

	printf("\n");

	return 0;
}