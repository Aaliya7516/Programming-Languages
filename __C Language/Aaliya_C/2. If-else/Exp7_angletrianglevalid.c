/*Write a program to check whether a triangle is valid or not, when the three angles of the
triangle are entered through the keyboard. A triangle is valid if the sum of all the three
angles is equal to 180 degrees. */
#include<stdio.h>
int main ()
{
    float a,b,c;
    printf(" Enter angles of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b+c==180) printf ("\n Triangle is valid.");
    else printf ("\n Triangle is not valid.");
    return 0;
}
