/*26. Write a C program to check whether a number is palindrome or not.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,r=0,a;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }
    if(r==n1) printf("\n%d is palindrome. \n",n1);
    else  printf("\n%d is NOT palindrome. \n",n1);
    return 0;
}
