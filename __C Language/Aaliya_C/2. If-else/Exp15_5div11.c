/*Write a C program to check whether a number is divisible by 5 and 11 or not. */
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if ((a%5==0)&&(a%11==0)) printf("\n%d is divisible by 5 and 11. ",a);
    else printf("\n%d is NOT divisible by 5 and 11. ",a);
    return 0;
}
