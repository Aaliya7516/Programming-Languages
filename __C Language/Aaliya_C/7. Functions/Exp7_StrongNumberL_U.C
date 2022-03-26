/*7. Write a C program to print all strong numbers between given interval using functions.*/
#include<stdio.h>
void StrongLimit(int,int);
int main()
{
    int l,u;
    printf("\nEnter the interval : ");
    scanf("%d%d",&l,&u);
    StrongLimit(l,u);
    return 0;
}
void StrongLimit(int l,int u)
{
    int i,i1,j,k,f,sum;
    for(i=l;i<=u;i++)
    {
        i1=i;
        sum=0;
        for(j=1;i1>0;j++)
        {
            f=1;
            for(k=1;k<=(i1%10);k++)  f*=k;
            sum+=f;
            i1/=10;
        }
        if(sum==i)  printf("\n%d is Strong number.\n",i);
    }
}
