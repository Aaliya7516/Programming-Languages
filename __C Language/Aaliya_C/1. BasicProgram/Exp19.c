/*Write C program to enter base and height and find its area.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter base and height of triangle : ");
    scanf("%d%d",&a,&b);
    c=(b*a)/2;// don't write 1/2*b*a it will follow presidence and first calculate 1/2 i.e. 0
    printf("The area is : %d",c);
    return 0;
}
