#include<iostream>
using namespace std;
int pow(int,int);
int fact(int);
main()
{
    int x, n, i;
    float sum=0;
    cout<<"\nEnter value of x and n : ";
    cin>>x>>n;

    for(i=1;i<=n;i+=2)
    {
        sum+=float(pow(x,i))/fact(i);
    }

    cout<<"\nSum of the series x + x^3/3! + x^5/5! ... + x^n/n! : "<<sum<<endl<<endl;
}
int pow(int a,int n)
{
    int i,a1=1;
    for(i=1;i<=n;i++)
        a1*=a;
    return a1;
}
int fact(int n)
{
    int i,n1=1;
    for(i=1;i<=n;i++)
        n1*=i;
    return n1;
}
