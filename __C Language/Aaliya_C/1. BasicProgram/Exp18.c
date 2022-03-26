/*Write a C program to enter two angles of triangle and find the third side.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two sides of triangle : ");
    scanf("%d%d",&a,&b);
    c=180-a-b;
    printf("The third side is : %d",c);
    return 0;
}
