#include<stdio.h>
#include<math.h>
void funct(int a, int b, int c, int d, int e,int *sum, float *avg, float *sd)
{
    *sum=a+b+c+d+e;
    *avg=*sum/5.0;
    *sd=sqrt((pow((a-*avg),2)+pow((b-*avg),2)+pow((c-*avg),2)+pow((d-*avg),2)+pow((e-*avg),2))/5);
}

int main()
{
    int a, b, c, d, e, sum;
    float  avg, sd;
    printf("\nEnter 5 integers : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    funct(a,b,c,d,e,&sum,&avg,&sd);
    printf("\nSum : %d",sum);
    printf("\nAverage : %f",avg);
    printf("\nStandard deviation : %f",sd);
    return 0;
}
