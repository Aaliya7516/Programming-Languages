/*22. 1 2 3 6 9 18 27 54... */
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0;
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0) sum+=2*(pow(3,(i/2)-1));
        else sum+=(pow(3,(i/2)));
    }
    printf("Summation of %d terms : %d",n,sum);
    return 0;
}
