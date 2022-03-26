/*5. Write a C program to find second largest element in an array. */
#include<stdio.h>
int main()
{
    int a[10],i,max1,max2;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
    }
    printf("\nSecond largest element : %d",max2);
    return 0;
}
