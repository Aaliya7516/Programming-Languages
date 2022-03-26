/*8. Write a C program to print all Armstrong numbers between given interval using functions. */
#include<stdio.h>
void armstrongLimit(int,int);
int main()
{
    int l,u;
    printf("\nEnter the interval : ");
    scanf("%d%d",&l,&u);
    armstrongLimit(l,u);
    return 0;
}
void armstrongLimit(int l,int u)
{
    int i,i1,i2,j,k,m,b,sum;
    for(i=l;i<=u;i++)
    {
        i2=i1=i;
        sum=0;
        for(j=0;i1>0;j++) i1/=10;
        for(k=1;k<=j;k++)
        {
            b=1;
            for(m=1;m<=j;m++)  b*=i2%10;
            sum+=b;
            i2/=10;
        }
        if(sum==i)  printf("\n%d is Armstrong number.\n",i);
    }
}
