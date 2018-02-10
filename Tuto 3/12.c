	// While purchasing certain items, a discount of 10% is offered if the quantity purchased
// is more than 1000. If quantity and price per item are input through the keyboard, write
// a program to calculate the total expenses.

#include <stdio.h>

int main(){

  int n, quantity, total_quantity=0, i;
  float price, total_price=0;

  printf("Number of items: ");
  scanf("%d", &n);

  for(i = 0; i<n; i++){
    printf("Quantity of item %d: ", i+1);
    scanf("%d", &quantity);
    printf("Price of item %d: ", i+1);
    scanf("%f", &price);

    total_quantity += quantity;
    total_price += (price * quantity);
  }

  printf("total items %d\n", total_quantity);
  printf("total %f\n", total_price);

  if(total_quantity>1000){
    total_price = total_price - (0.1 * total_price);
  }

  printf("total items %d\n", total_quantity);
  printf("total %f\n", total_price);

  return 0;
}
