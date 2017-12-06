#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main() {

  int a, b, c;

  printf("Enter 2 numbers:\n");
  scanf("%d %d", &a, &b);
  printf("Enter the operation \n1.Add\n2.Sub\n2.Multiply\n4.Divide");

  scanf("%d", &c);

  switch(c) {
    case 1 : add(a,b);
    break;
    case 2 : sub(a,b);
    break;
    case 3 : mul(a,b);
    break;
    case 4 : div(a,b);
    break;
    default : printf("Wrong Input\n");
  }
  return 0;
}

void add(int a,int b) {
  int c = a+b;
  printf("Ans : %d", c);
}

void sub (int a, int b) {
  int c = a-b;
  printf("Ans : %d", c);
}

void mul(int a, int b) {
  int c = a*b;
  printf("%d\n", c);
}

void div(int a, int b) {
  float c = a/b;
  printf("%f\n", c);
}
