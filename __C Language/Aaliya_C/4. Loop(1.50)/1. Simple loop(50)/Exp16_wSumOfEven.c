/*16. Write a C program to find sum of all even numbers between 1 to n.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,s=0,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    while(2*i<=n)
    {
        s=s+i*2;
        i++;
    }
    printf(" %d",s);
    return 0;
}
