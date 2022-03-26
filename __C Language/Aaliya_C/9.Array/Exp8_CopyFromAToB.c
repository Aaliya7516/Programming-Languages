/*8. Write a C program to copy all elements from an array to another array. */
#include<stdio.h>
int main()
{
    int a[10],i,b[10];
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)   b[i]=a[i];
    printf("\nElement in second array : ");
    for(i=0;i<10;i++)  printf("  %d  ",b[i]);
    return 0;
}
