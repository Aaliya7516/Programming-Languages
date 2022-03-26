#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\n Enter the number and its power : ");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("\n %d^%d = %d",a,b,c);
    return 0;
}
