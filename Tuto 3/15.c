// WAP using conditional operators to determine whether a year entered through
// the keyboard is a leap year or not.
#include <stdio.h>

int main(){

  int year, check;

  scanf("%d", &year);

  check = (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0);

  if(check==1){
    printf("Leap");
  }else {
    printf("not leap");
  }

  return 0;
}
