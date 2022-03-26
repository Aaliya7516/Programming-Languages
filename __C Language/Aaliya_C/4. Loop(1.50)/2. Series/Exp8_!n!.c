/*8. 1! - 2! + 3! - 4! + 5! - ... + n! */
#include<stdio.h>
int main()
{
    int n,i,j,f,sum=0;
    printf("\nEnter the number of terms required : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++) f*=j;
        if(i%2!=0) sum+=f;
        else sum-=f;
    }
    printf("\nSum of series : %d",sum);
    return 0;
}
