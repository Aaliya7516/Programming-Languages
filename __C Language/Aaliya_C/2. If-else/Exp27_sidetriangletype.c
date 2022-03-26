/*27. Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle or
right angled traingle.*/

#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("Enter sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b>=c||a+c>=b||b+c>=a)
    {
        if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))  printf ("\n Triangle is right angle triangle.");
        else if(a==b&&b==c) printf ("\n Triangle is equilateral triangle.");
        else if(a==b||b==c||c==a)  printf ("\n Triangle is isosceles  triangle.");
        else printf ("\n Triangle is scalene triangle.");
    }
    else printf ("\n Triangle is not valid.");
    return 0;
}
