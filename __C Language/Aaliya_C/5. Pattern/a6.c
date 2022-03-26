#include<stdio.h>
int main()
{
int i,j,k,n;
printf("\nEnter value of n : ");
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
printf(" ");
for(k=1;k<=i;k++)
{
if(i==n||k==i||k==1||i==1)  printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}
