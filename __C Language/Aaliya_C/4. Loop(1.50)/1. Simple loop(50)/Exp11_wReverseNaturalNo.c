/*11. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter value of n : ");
    scanf("%d",&i);
    while(i>=1)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}
