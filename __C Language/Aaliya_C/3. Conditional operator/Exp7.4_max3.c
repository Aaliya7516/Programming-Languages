#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three integer : ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b && a>c)?a:((b>c)?b:c);
    printf("Maximum : %d",max);
    return 0;
}
