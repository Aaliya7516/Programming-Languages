/*2. 1 - 2 + 3 - 4 + 5 - ... + n   */
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)  sum-=i;
        else sum+=i;
    }
    printf("\nSum of series : %d",sum);
    return 0;
}
