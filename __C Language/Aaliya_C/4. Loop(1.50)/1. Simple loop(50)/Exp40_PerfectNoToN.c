/*40. Write a C program to print all Perfect numbers between 1 to n. */
#include<stdio.h>
#include<conio.h>
int main()
{
int j,i,n,d;
printf("Enter the number : ");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
i=0;
for(d=1;d<j;d++) if(j%d==0) i+=d;
if(i==j)
printf("\n%d is a Perfect number.\n",j);
}
return 0;
}
