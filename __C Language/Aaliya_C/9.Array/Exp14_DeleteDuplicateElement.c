/*14. Write a C program to delete all duplicate elements from an array. */
#include<stdio.h>
int main()
{
    int a[10],i,j,k,n,data;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)   scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        data=a[i];
        for(j=i+1;j<n;j++)
        {
            if(data==a[j])
            {
                for(k=j;k<n-1;k++)  a[k]=a[k+1];
                --n;
                j--;
            }
        }
    }

    printf("\nAfter deletion array elements are : ");
    for(i=0;i<n;i++)
    printf("  %d  ",a[i]);

    return 0;
}
