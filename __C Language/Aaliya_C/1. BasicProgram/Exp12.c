/*If the total selling price of 15 items and total profit earned on them is input through the keyboard, w.a.p to find cost price of one item.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float s, p, c;
    printf("Enter selling price and profit of 15 items : ");
    scanf("%f%f",&s,&p);
    c=(s-p)/15;
    printf("Cost price of one item is : %f",c);
    return 0;
}
