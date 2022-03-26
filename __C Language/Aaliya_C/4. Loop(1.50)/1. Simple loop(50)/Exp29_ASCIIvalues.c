/*29. Write a C program to print all ASCII character with their values.*/
#include<stdio.h>
int main()
{
    int i=0;
    for(i=0;i<=255;i++)  printf("\nThe ASCII value of %c is : %d",i,i);
    return 0;
}
