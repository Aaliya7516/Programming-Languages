/*While purchasing certain items, a discount of 10% is offered if the quantity purchased is more
than 1000. If quantity and price per item are input through the keyboard, write a program to
calculate the total expenses. */
#include<stdio.h>
#include<conio.h>
main()
{
    int q;
    float p,d=0,t;
    printf("Enter quantity and price : ");
    scanf("%d%f",&q,&p);
    if (q>1000)
       d=0.1;
    t=q*p-q*p*d;
    printf("\n Total = %f",t);
    return 0;
}
