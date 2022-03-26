/*Write C program to find the area of an equilateral.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,c;
    printf("Enter one side of equilateral triangle : ");
    scanf("%d",&a);
    c=sqrt(3)*a*a/4;
    printf("The area is : %d",c);
    return 0;
}
