#include <stdio.h>

struct Employee{
	char name[20];
	int age;
	float salary;
}e[20],temp;

void sort(struct Employee a[20]);

int main(){
	int i;
	for(i=0;i<10;i++){
			printf("Name, Age and salary :");
			scanf("%s %d %f", e[i].name, &e[i].age, &e[i].salary);	
	}
	sort(e);
	printf("Sorted structure is :\n");
	for(i=0;i<10;i++){
			printf("Name: %s, Age: %d and salary = %.2f\n",e[i].name, e[i].age, e[i].salary);	
	}
}

void sort(struct Employee a[20]){
		int i,j;
		for(i=0; i<10; i++){
				for(j=i; j<10; j++){
						if(a[j].salary<a[i].salary){
								temp = a[i];
								a[i] = a[j];
								a[j] = temp;
						}
				}
		}
}