#include <stdio.h>
int hcf_lcm(int *high ,int *low){
		int i,c,d;
		c=*high,d=*low;
		for(i=1;i<=c && i<=d;i++){
			if (c%i==0 && d%i==0){
				*high=i;
			}
		}
		*low=(c*d)/(*high);
}

int main(){
	  int num1,num2;
	  printf("enter the num1 and num2: ");
	  scanf("%d %d",&num1,&num2);
	  hcf_lcm(&num1,&num2);
	  printf("\nHCF=%d  LCM=%d",num1,num2);
	  return 0;
}
