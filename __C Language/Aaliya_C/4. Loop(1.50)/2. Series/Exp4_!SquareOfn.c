/*4. (1*1) - (2*2) + (3*3) - (4*4) + (5*5) - ... + (n*n) */
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0) sum+=(i*i);
        else sum-=(i*i);
    }
    printf("\nSum of series : %d",sum);
    return 0;
}
