/*Write a c program to find maximum between two number.*/
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    printf("Enter value of a and b : ");
    scanf("%d%d",&a,&b);
    if(a>b) printf("\n The greater value is : %d",a);
    else printf("\n The greater value is : %d",b);
    return 0;
}
