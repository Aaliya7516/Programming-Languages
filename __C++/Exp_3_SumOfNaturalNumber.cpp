#include<iostream>
using namespace std;
main()
{
    int i,sum=0;

    for(i=1;i<=100;i++)
        sum+=i;
    cout<<"\nSum of first 100 natural numbers using for loop : "<<sum<<endl<<endl;



    i=1;
    sum=0;
    while(i<=100)
    {
        sum+=i;
        i++;
    }
    cout<<"\nSum of first 100 natural numbers using while loop : "<<sum<<endl<<endl;



    i=1;
    sum=0;
    do
    {
        sum+=i;
        i++;
    }
    while(i<=100);
    cout<<"\nSum of first 100 natural numbers using do-while loop : "<<sum<<endl<<endl;



    return 0;
}
