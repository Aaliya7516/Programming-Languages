/*If a four digit number is input through the keyboard
w.a.p. to sum its first and last digit.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,f,l,s;
    printf("Enter a four digit integral number : ");
    scanf("%d",&n);//1234
    l=n%10;//l=4
    f=n/1000;//f=1
    s=l+f;//s=l+f=5
    printf("Sum of its first and last digit is : %d",s);
    return 0;
}
