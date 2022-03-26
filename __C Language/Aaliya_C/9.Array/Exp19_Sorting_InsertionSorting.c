#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    for(i=0;i<n;i++)   scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;(j>=0 && temp<a[j]);j--)   a[j+1]=a[j];
        a[j+1]=temp;
    }

    printf("\nAfter Sorting array elements are : ");
    for(i=0;i<n;i++)
    printf("  %d  ",a[i]);
    return 0;
}
