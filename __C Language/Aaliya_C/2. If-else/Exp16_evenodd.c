/*Write a C program to check whether a number is even or odd. */
#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    if (a%2==0)
        printf("\nThe number is even ");
    else
        printf("\nThe number is odd ");
    return 0;
}
