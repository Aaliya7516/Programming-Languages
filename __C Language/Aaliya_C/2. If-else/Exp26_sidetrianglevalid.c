/*26. Write a C program to input all sides of a triangle and check whether triangle is valid or not.*/
#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("Enter sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>=c||a+c>=b||b+c>=a) printf("\n Triangle is valid.");
    else printf ("\n Triangle is not valid.");
    return 0;
}
