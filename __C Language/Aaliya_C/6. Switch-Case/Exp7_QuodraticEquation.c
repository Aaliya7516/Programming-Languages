/*7. Write a C program to find roots of a quadratic equation using switch case. */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2;
    printf("\nEnter a, b & c where a*x*x+b*x+c=0 : ");
    scanf("%d%d%d",&a,&b,&c);

    switch((b*b-4*a*c)>=0)
    {
        case 1:
        {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("\nRoots if Quadratic equation are : \n(1) %f \n(2) %f\n",x1,x2);
        break;
        }
        case 0:
        {
        x1=(sqrt(4*a*c-b*b))/(2*a);
        x2=-(b/(float)(a*2));
        printf("\nRoots if Quadratic equation are : ");
        printf("\n(1) %f + i %f",x2,x1);
        printf("\n(2) %f - i %f\n",x2,x1);
        break;
        }
    }
    return 0;
}
