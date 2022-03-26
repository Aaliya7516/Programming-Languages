/*38. Write a C program to print all Armstrong numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int i,i1,i2,j,k,n,p,a,sum;
    printf("\nEnter the range : ");
    scanf("%d",&n);
    printf("\nArmstrong numbers : \n");
    for(i=1;i<=n;i++)
    {
        i2=i1=i;
        sum=0;
        for(j=0;i1>0;j++) i1=i1/10;  //j is storing number of digit...
        while(i2>0)
        {
            p=1;
            a=i2%10;
            for(k=1;k<=j;k++)  p*=a;
            i2=i2/10;
            sum+=p;
        }
        if (i==sum)  printf(" %d \n",i);
    }
    printf("\n");
    return 0;
}
