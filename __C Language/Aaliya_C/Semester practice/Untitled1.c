#include<stdio.h>
int main()
{
    int a,sum=0,avg,i=0;
    do
    {
        printf("Enter the number : ");
        scanf("%d",&a);
        sum+=a;
        i++;
    }
    while(a!=0);
    printf("\nAverage : %d",sum/i);
    return 0;
}
