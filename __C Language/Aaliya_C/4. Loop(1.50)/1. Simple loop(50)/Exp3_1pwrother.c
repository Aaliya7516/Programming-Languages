/*3. Two numbers are entered through the keyboard. Write a program to find the value of one
number raised to the power of another. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p,n1;
    printf("Enter number and its power : ");
    scanf("%d%d",&n,&p);
    n1=n;
    while(p>1)
    {
        n=n*n1;
        p--;
    }
    printf ("\nResult : %d ",n);
    return 0;
}
