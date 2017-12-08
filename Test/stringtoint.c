#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  int temp;
  char a[100];
  top:
  printf("Enter A String:");
  scanf("%s", a);
  // printf("%s", a);
  temp = atoi(a);
  if (temp == 0) {
    printf("Not an integer\n");
  }
  else {
    printf("%d\n", temp);
  }
  goto top;
}
