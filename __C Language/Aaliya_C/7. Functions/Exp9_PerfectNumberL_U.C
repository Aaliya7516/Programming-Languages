/*9. Write a C program to print all perfect numbers between given interval using functions.*/
#include<stdio.h>
void perfectNumberLimit(int,int);
int main()
{
    int l,u;
    printf("\nEnter the interval : ");
    scanf("%d%d",&l,&u);
    perfectNumberLimit(l,u);
    return 0;
}
void perfectNumberLimit(int l,int u)
{
    int sum,i,j;
    for(i=l;i<=u;i++)
    {
        sum=0;
        for(j=1;j<i;j++)  if(i%j==0)  sum+=j;
        if(sum==i)  printf("\n%d is a Perfect number.\n",i);
    }
}
