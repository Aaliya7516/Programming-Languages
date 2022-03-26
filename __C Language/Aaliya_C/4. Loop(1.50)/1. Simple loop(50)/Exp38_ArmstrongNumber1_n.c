/*38. Write a C program to print all Armstrong numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int r,i,i1,i2,j,k,a,p,sum;
    printf("\nEnter the range : ");
    scanf("%d",&r);
    printf("\nArmstrong numbers : ");
    for(i=1;i<=r;i++)
    {
        sum=0;
        i1=i2=i;
        for(j=0;i1>0;j++)  i1=i1/10;
        while(i2>0)
        {
            p=1;
            a=i2%10;
            for(k=1;k<=j;k++) p=p*a;
            sum=sum+p;
            i2=i2/10;
        }
        if(i==sum)  printf("\n %d  \n",i);
    }
    return 0;
}
