#include <stdio.h>
int main()
{
    int amt, thou=0, fivehun=0, hun=0, fifty=0, twenty=0, ten=0, five=0, two=0, one=0;
    printf("Enter the amount : ");
    scanf("%d", &amt);
    thou = amt/1000;
    fivehun = (amt%1000)/500;
    hun = ((amt%1000)%500)/100;
    fifty = (((amt%1000)%500)%100)/50;
    twenty = ((((amt%1000)%500)%100)%50)/20;
    ten = (((((amt%1000)%500)%100)%50)%20)/10;
    five = ((((((amt%1000)%500)%100)%50)%20)%10)/5;
    two = (((((((amt%1000)%500)%100)%50)%20)%10)%5)/2;
    one = ((((((((amt%1000)%500)%100)%50)%20)%10)%5)%2)/1;
    printf("Thousands = %d\nFive Hundreds = %d\nHundred = %d\nFifty = %d\nTwenty = %d\nTen = %d\nFive = %d\nTwo = %d\nOne = %d\n", thou,fivehun,hun,fifty,twenty,ten,five,two,one);
    return 0;
}
