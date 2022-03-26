/*6. Write a C program to count total number of even and odd elements in an array. */
#include<stdio.h>
int main()
{
    int a[10],i,e=0,o=0;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0) e++;
        else o++;
    }
    printf("\nTotal even elements : %d",e);
    printf("\nTotal odd elements  : %d",o);
    return 0;
}
