/*5. Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes
of each digit of the number is equal to the number itself, then the number is called an
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ) */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,n2,sum=0,i,j,a,p;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    n1=n;
    n2=n;
   for(i=0;n>0;i++) n=n/10;
   while (n1>0)
   {
       p=1;
       a=n1%10;
       for(j=1;j<=i;j++)  p=p*a;
       sum=sum+p;
       n1=n1/10;
   }
   if(n2==sum)  printf("\n %d is Armstrong number.\n",n2);
   else    printf("\n %d is NOT Armstrong number.\n",n2);
    return 0;
}
