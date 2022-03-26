/*2. Write a C program to print all negative elements in an array. */
#include<stdio.h>
int main()
{
    int a[10],i;
     printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<0)  printf("   %d   ",a[i]);
    }
    return 0;
}
