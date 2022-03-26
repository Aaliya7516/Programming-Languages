/*32. Write a C program to input electricity unit charges and calculate total electricity bill according to
the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main()
{
    int u;
    float a;
    printf("\nEnter electricity unit charges : ");
    scanf("%d",&u);

    if(u<=50) a=u*0.5;
    else if (u<=150) a=(50*0.5)+((u-50)*0.75);
    else if (u<=250) a=(50*0.5)+(100*0.75)+((u-150)*1.2);
    else a=(50*0.5)+(100*0.75)+(100*1.2)+((u-250)*1.5);

    a=a+a*0.2;
    printf("\nTotal electricity charges : %.2f",a);
    return 0;
}
