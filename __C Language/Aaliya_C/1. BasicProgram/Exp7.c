/*If a five digit number is input through the keyboard, write a program to calculate the sum of its digits.*/
int main()
{
int a,b,c,d,e,f;//12345
printf("Enter a five digit number (integer) :");
scanf("%d",&a);
b=a%10;         //b=5
a=a/10; //a=1234
c=a%10;         //c=4
a=a/10; //a=123
d=a%10;         //d=3
a=a/10; //a=12
e=a%10;         //e=2
a=a/10;         //a=1
f=a+b+c+d+e;    //f=1+2+3+4+5=15
printf("\n Sum of its digit is : %d",f);
return 0;
}
