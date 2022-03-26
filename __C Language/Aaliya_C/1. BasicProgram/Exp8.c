/*If a five digit number is input through the keyboard,
w. a. p. to reverse its digits.*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n,N,a,b,c,d,e;
printf("Enter five digit integral number : ");
scanf("%d",&n);//n=12345
a=n%10;//a=5
n=n/10;//n=1234
b=n%10;//b=4
n=n/10;//n=123
c=n%10;//c=3
n=n/10;//n=12
d=n%10;//d=2
n=n/10;//n=1

e=a*10000+b*1000+c*100+d*10+n;
printf("\n The reverse of this number is : %d",e);
return 0;
}
