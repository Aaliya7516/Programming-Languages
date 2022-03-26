/*33. Write a C program to check whether a number is Prime number or not.*/
#include<stdio.h>
int main()
{
    int a,i;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    a;
    for(i=2;i<a;i++)  if(a%i==0) break;
    if(a==i) printf("\n%d is prime number.\n",a);
    else printf("\n%d is NOT a prime number.\n",a);
    return 0;
}
