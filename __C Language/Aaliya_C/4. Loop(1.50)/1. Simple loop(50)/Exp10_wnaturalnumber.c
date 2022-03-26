/*10. Write a C program to print all natural numbers from 1 to n. using while loop.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n %d",i);
        i++;
    }
    return 0;
}
