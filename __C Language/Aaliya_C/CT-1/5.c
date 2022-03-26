#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("\n Enter value of a,b and c for a*x*x+b*x+c=0 : ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n Its Roots : \n(1) %f \n(2) %f\n",x1,x2);
    }
    else
    {
        x1=-b/(float)(2*a);
        x2=sqrt(-d);
        printf("\n Its Roots : ");
        printf("\n (1) %f + i %f",x1,x2);
        printf("\n (2) %f - i %f",x1,x2);
    }
    return 0;
}
