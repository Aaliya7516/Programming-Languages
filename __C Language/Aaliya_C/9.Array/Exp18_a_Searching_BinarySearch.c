/*18. Write a C program to search an element in an array. */
#include<stdio.h>
int main()
{
    int a[10],l,h,m,i,n,item;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array in ascending order : ");
    for(i=0;i<n;i++)   scanf("%d",&a[i]);
    printf("\nEnter item value to be searched : ");
    scanf("%d",&item);
    l=0; h=n-1;
    while(l<=h)
    {
        m=(h+l)/2;
        if(item==a[m])  printf("\nItem found at %d position.\n",m+1);
        if(item<a[m]) h=m-1;
        else  l=m+1;
    }
    return 0;
}
