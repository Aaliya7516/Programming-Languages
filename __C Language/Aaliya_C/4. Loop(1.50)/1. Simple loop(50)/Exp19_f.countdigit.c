/*19. Write a C program to count number of digits in a number. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,ct=0,s;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(;n>0;ct++)
    {
       n=n/10;
    }
   printf("%d",ct);
    return 0;
}
