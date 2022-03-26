#include<stdio.h>
int main()
{
int i,j,n;
printf("\nEnter value of n : ");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i==1||j==1||j==i||i==n)
    printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}
