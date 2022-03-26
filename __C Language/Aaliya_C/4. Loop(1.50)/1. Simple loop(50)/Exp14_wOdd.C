/*14. Write a C program to print all odd number between 1 to 100.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%2!=0)
        printf("\n %d",i);
        i++;
    }
    return 0;
}
