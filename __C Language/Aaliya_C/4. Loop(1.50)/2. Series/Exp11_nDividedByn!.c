/*11. (1/1!) + (2/2!) + (3/3!) + (4/4!) + (5/5!) + ... + (n/n!) */
#include<stdio.h>
int main()
{
    int n,i,j,f;
    float sum=0;
    printf("\nEnter the number of terms required : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=i;j++)  f*=j;
        printf("    %d    ",f);
        sum+=((float)i/f);
    }
    printf("\nSum of series : %f",sum);
    return 0;
}
