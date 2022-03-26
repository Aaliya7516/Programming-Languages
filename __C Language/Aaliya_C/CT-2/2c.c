/*sort the array with the help of insertion sort . and also write a program.   , 3 , 5 , 2 , 1 */

#define MAX 10
#include<stdio.h>
int main()
{
    int a[MAX],n,i,j,temp;
    printf("Enter number of element in the array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)  scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;(j>=0 && temp<a[j]);j--)  a[j+1]=a[j];
        a[j+1]=temp;
    }

    printf("\nSorted array : ");
    for(i=0;i<n;i++)  printf("  %d  ",a[i]);
    return 0;
}
