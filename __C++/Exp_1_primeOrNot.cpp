#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,i,flag=0;
    cout<<"Enter any number : ";
    cin>>a;
    for(i=2;i<a;i++)
        if(a%i==0)
            flag=1;
    if(flag==1)
        cout<<a<<" is not a prime number.";
    else
        cout<<a<<" is prime number.";
}