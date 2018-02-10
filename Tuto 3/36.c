#include <stdio.h>
#include <math.h>
	int main(){
	  int a,b,c;
	  float s, area;
	  printf("enter the value of a,b,c : ");
	  scanf("%d%d%d",&a,&b,&c);
	  if(((a+b)>c) && ((b+c)>a) && ((a+c)>b)){
			  s=((a+b+c)/2);
			  area= sqrt(s*(s-a)*(s-b)*(s-c));
			  printf("\nThe area of the triangle from the given data is = %.2f",area );
	  }else{
	  		printf("Not a triangle\n");
	  }
	  return 0;
}
