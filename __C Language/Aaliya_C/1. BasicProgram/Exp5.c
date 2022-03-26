/*The length and breadth of rectangle and radius of circle are input through the keyboard.
Write the program to calculate the area and perimeter of rectangle, the area and circumference of circle.*/

#include<stdio.h>
#include<conio.h>
int main()
{
float l,b,r,ar,p,ac,c;
printf("Enter length and breadth of rectangle : ");
scanf("%f%f",&l,&b);
printf("\nEnter radius of circle : ");
scanf("%f",&r);
ar=l*b;
p=2*(l+b);
ac=3.14*r*r;
c=2*3.14*r;
printf("\n Area of rectangle       : %f",ar);
printf("\n Perimeter of rectangle  : %f",p);
printf("\n Area of circle          : %f",ac);
printf("\n Circumference of circle : %f",c);
return 0;
}
