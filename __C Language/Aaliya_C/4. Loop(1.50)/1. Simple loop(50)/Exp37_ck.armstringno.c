/*37. Write a C program to check whether a number is Armstrong number or not. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,n2,sum=0,i,j,a,p;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);//153
    n1=n;//153
    n2=n;//153
   for(i=0;n1>0;i++) n1=n1/10;//i=3(power found)
   while (n2>0)
   {
       p=1;
       a=n2%10;//a=3;5;1
       for(j=1;j<=i;j++)  p=p*a;//(p=3;9;27);(p=5;25;125);(p=1;1;1)
       sum=sum+p;//sum=27;152;153
       n2=n2/10;//n1=15;1;0
   }
   if(n==sum)  printf("\n %d is Armstrong number.\n",n);
   else    printf("\n %d is NOT Armstrong number.\n",n);
    return 0;
}
