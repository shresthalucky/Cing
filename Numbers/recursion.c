#include <stdio.h>
int sum();
int main(){
    int s;
    s=sum();
    printf("sum = %d\n", s);
    return 0;
}

int sum(){
    static int count=0, t=0, n;
    if(count==5)
        return 0;
    else{
      printf("Enter number : ");
      scanf("%d", &n);
      t+=n;
      count++;
      sum();
    }
    return t;
}
