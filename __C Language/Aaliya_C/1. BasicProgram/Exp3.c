#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float agg,p;
    printf("\nEnter marks in five subjects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("\nAggregate : %.2f",(float)(a+b+c+d+e)/5);
    printf("\nPercentage : %.2f%%",(float)(a+b+c+d+e)/5);
    return 0;
}
