/*36. Write a C program to find all prime factors of a number.*/
#include<stdio.h>
int main()
{
    int a,i,p;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    printf("\nPrime factor of %d are : ",a);
    for(i=2;i<a;i++)
    {
        while(a%i==0)
        {
            printf(" %d ",i);
            a/=i;
        }
    }
    printf("\n");
    return 0;
}
