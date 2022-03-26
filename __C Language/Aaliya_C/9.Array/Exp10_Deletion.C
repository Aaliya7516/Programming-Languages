/*10. Write a C program to delete an element from an array at specified position. */
#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],i,p,n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("\nEnter the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nEnter position for deletion : ");
    scanf("%d",&p);

    for(i=p;i<n;i++)  a[i-1]=a[i];
    --n;

    printf("\nAfter deletion array elements are : ");
    for(i=0;i<n;i++)
    printf("  %d  ",a[i]);
    return 0;
}
