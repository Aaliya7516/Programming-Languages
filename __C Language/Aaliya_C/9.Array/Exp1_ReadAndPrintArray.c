/*1. Write a C program to read and print elements of array. */
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("\n Enter 5 numbers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("  %d  ",a[i]);
    }
    return 0;
}
