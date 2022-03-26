/*9. Write a C program to insert an element in an array. */
#include<stdio.h>
int main()
{
    int a[10],i,v,p,n;
    printf("Enter number of array element (<10) and then array element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)  scanf("%d",&a[i]);


    printf("\nEnter item value and position for insertion : ");
    scanf("%d%d",&v,&p);
    for(i=n-1;i>=p-1;i--)  a[i+1]=a[i];
    a[i+1]=v;
    n++;

    for(i=0;i<n;i++)  printf("\n%d",a[i]);
    return 0;
}
