/*17. Write a C program to find sum of all odd numbers between 1 to n.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,s=0,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2!=0) s=s+i;
        i++;
    }
     printf("\n %d",s);
    return 0;
}
