// According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year
// is input through the keyboard write a program to find out what is the day on 1st January
// of this year.
#include <stdio.h>

int main(){
  int leapdays, firstday, year;
  long int normaldays, totaldays;
  char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

  printf("Enter Year: ");
  scanf("%d", &year);

  normaldays = (year-1)*365L;
  leapdays = (year-1)/4-(year-1)/100+(year-1)/400;

  totaldays = normaldays + leapdays;
  firstday = totaldays%7;

  printf("%s", days[firstday]);
  return 0;
}
