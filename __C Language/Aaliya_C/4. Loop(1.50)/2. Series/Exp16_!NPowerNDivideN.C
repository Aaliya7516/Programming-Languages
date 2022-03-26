/*16. 1/1 - (2*2)/2 + (3*3*3)/3 - (4*4*4*4)/4 + (5*5*5*5*5)/5 - ... + (n*n*n...*n)/n */
#include<stdio.h>
int main()
{
    int n,i,j,p,sum=0;
    printf("\nEnter the number of terms required : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=i;j++)  p*=i;
        if(i%2!=0)  sum+=(p/i);
        else  sum-=(p/i);
    }
    printf("\nSum of series : %d",sum);
    return 0;
}
