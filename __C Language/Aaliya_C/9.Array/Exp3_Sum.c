/*3. Write a C program to find sum of all array elements. */
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    printf("\n Sum = %d ",sum);
    return 0;
}
