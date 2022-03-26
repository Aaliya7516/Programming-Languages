/*39. Write a C program to check whether a number is Perfect number or not. */
#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,d;
printf("Enter the number : ");
scanf("%d",&n);
for(d=1;d<n;d++)
{
    if(n%d==0)
        i=d+i;
}
if(i==n)
printf("\n%d is a Perfect number.\n",n);
else
    printf("\n%d is NOT a Perfect number.\n",n);
return 0;
}
