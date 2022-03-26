#include<iostream>
using namespace std;
main()
{
    int op,a,b,c,d;
    cout<<"Enter 1,2 or 3 to choose any of these options : ";
    cout<<"\n 1. Larger value between 2 numbers";
    cout<<"\n 2. Larger value between 3 numbers";
    cout<<"\n 3. Larger value between 4 numbers"<<endl<<endl;
    cin>>op;

    switch(op)
    {
    case 1:
        {
            cout<<"\nEnter two numbers : ";
            cin>>a>>b;
            if(a>b)
                cout<<"\nLarger value is "<<a<<endl;
            else
                cout<<"\nLarger value is "<<b<<endl;

            break;
        }
    case 2:
        {
            cout<<"\nEnter three numbers : ";
            cin>>a>>b>>c;
            if(a>b && a>c)
                cout<<"\nLarger value is "<<a<<endl;
            else if(b>c)
                cout<<"\nLarger value is "<<b<<endl;
            else
                cout<<"\nLarger value is "<<c<<endl;

            break;
        }
    case 3:
        {
            cout<<"\nEnter four numbers : ";
            cin>>a>>b>>c>>d;
            if(a>b && a>c && a>d)
                cout<<"\nLarger value is "<<a<<endl;
            else if(b>c && b>d)
                cout<<"\nLarger value is "<<b<<endl;
            else if(c>d)
                cout<<"\nLarger value is "<<c<<endl;
            else
                cout<<"\nLarger value is "<<d<<endl;

            break;
        }
    default : cout<<"\n Invalid choice. ";
    }
    return 0;
}
