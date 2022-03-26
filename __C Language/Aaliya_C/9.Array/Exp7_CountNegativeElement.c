/*7. Write a C program to count total number of negative elements in an array. */
#include<stdio.h>
int main()
{
    int a[10],i,n=0;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]<0) n++;
    }
    printf("\nTotal negative elements : %d",n);
    return 0;
}
