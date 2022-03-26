/*If cost price and selling price of an item is input through the keyboard, write a program to
determine whether the seller has made profit or incurred loss. Also determine how much
profit he made or loss he incurred.*/
#include<stdio.h>
int main()
{
    float s,c;
    printf("Enter selling price and cost price : ");
    scanf("%f%f",&s,&c);
    if (c<s) printf("\n Profit : %.2f\n",s-c);
    else if (c>s) printf("\n Loss : %.2f\n",c-s);
    else printf("\nNeither profit nor loss.\n");
    return 0;
}
