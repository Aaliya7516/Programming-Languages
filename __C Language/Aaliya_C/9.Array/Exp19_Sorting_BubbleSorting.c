#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    for(i=0;i<n;i++)   scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\nAfter Sorting array elements are : ");
    for(i=0;i<n;i++)
    printf("  %d  ",a[i]);
    return 0;
}
