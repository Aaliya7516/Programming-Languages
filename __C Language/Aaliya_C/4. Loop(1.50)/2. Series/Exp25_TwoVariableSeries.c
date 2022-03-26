/*25. ((x-1)/x) + 1/2((x-1)/x)*(x-1)/x)) + 1/2((x-1)/x)*(x-1)/x)*(x-1)/x)) + 1/2((x-1)/x)*(x-1)/x)*(x-1)/x)*(x-1)/x)) + ……..*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,x;
    float sum=0;
    printf("\nEnter the value of x for series : (x-1)/x) + 1/2((x-1)/x)*(x-1)/x)) + 1/2((x-1)/x)*(x-1)/x)*(x-1)/x)) + 1/2((x-1)/x)*(x-1)/x)*(x-1)/x)*(x-1)/x)) + ... : \n");
    scanf("%d",&x);
    printf("\nEnter number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)  sum=((float)(x-1)/x);
        else  sum+=(float)1/2*(pow(((float)(x-1)/x),i));
    }
    printf("Summation of %d terms : %f",n,sum);
    return 0;
}
