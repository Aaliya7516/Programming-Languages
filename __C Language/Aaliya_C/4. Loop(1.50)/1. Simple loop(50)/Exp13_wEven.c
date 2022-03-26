/*13. Write a C program to print all even numbers between 1 to 100. - using while loop.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(2*i<=100)
    {
        printf("\n %d",2*i);
        i++;
    }
    return 0;
}
