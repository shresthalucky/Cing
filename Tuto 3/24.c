#include <stdio.h>

int main(){
    int y;
    float i, x;
    printf("i\ty\tx\n");
    for (y=1; y<=6; y++){
        for(x=5.5; x<=12.5; x+=0.5){
            i = 2 + (y + 0.5 * x);
            printf("%.2f\t%d\t%.2f\n", i, y ,x);
        }
        printf("\n");
    }
    return 0;
}
