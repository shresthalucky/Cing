#include <stdio.h>
#define PI 3.14

int main(){
    int opt;
    float l, b, h, r, area;
    printf("1-Area of rectangle\t2-Area of circle\t3-Area of triangle\n");
    printf("Enter your choice : ");
    scanf("%d", &opt);
    if(opt == 1){
        printf("Enter length and breadth :\t");
        scanf("%f%f", &l,&b);
        area = l*b;
        printf("Area of rectangle = %.2f sq.units\n", area);
    }else if(opt == 2){
      printf("Enter radius :\t");
      scanf("%f", &r);
      area = PI * r * r;
      printf("Area of circle = %.2f sq.units\n", area);
    }else if(opt == 3){
        printf("Enter base and height :\t");
        scanf("%f%f", &b,&h);
        area = 0.5 * b * h;
        printf("Area of triangle = %.2f sq.units\n", area);
    }else printf("Wrong input\n");
    return 0;
}
