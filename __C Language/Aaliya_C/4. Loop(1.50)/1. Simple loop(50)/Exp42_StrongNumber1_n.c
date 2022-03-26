/*42. Write a C program to print all Strong numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int r,i,i1,j,p=1,q,sum;
    printf("\nEnter the range : ");
    scanf("%d",&r);
    printf("\nStrong number between 1 and %d are : ",r);

    for(i=1;i<=r;i++)
    {
        sum=0;
        i1=i;
        while(i1>0)
        {
            q=1;
            p=i1%10;
            for(j=2;j<=p;j++)  q*=j;
            sum+=q;
            i1/=10;
        }
        if(sum==i)   printf("\n%d",i);
    }
    return 0;
}
