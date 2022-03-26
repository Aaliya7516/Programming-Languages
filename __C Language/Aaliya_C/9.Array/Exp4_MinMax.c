/*4. Write a C program to find maximum and minimum element in an array. */
#include<stdio.h>
int main()
{
    int a[10],i,max,min;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max) max=a[i];
        else if(a[i]<min)  min=a[i];
    }
    printf("\nMaximum : %d",max);
    printf("\nMinimum : %d",min);
    return 0;
}
