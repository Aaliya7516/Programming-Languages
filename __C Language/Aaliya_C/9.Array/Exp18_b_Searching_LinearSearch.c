/*18. Write a C program to search an element in an array. */
#include<stdio.h>
int main()
{
    int a[7],i,flag=0,item;
    printf("Enter elements of array : ");
    for(i=0;i<7;i++)   scanf("%d",&a[i]);
    printf("\nEnter item value to be searched : ");
    scanf("%d",&item);
    for(i=0;i<7;i++)
    {
        if(a[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)  printf("\nItem found at %d position.",i+1);
    else printf("\nItem not found.");
    return 0;
}
