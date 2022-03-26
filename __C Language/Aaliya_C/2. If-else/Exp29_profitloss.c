/*29. Write a C program to calculate profit or loss. */
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
