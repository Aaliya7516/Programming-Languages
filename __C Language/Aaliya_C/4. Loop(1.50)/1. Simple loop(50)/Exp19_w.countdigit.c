/*19. Write a C program to count number of digits in a number. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n>0)
    {
    c++;
    n=n/10;
    }
    printf("%d",c);
    return 0;
}
