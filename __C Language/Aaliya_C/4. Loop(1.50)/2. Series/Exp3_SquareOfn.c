/*3. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)   */
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum+=i*i;
    printf("\nSum of series : %d",sum);
    return 0;
}
