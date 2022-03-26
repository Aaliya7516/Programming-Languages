#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    int a[50][50], b[50][50], c[50][50], m1,m2,n1,n2, i,j,k;

    cout<<"\nEnter order of first matrix (number of rows and columns ) : ";
    cin>>m1>>n1;

    cout<<"\nEnter order of second matrix (number of rows and columns ) : ";
    cin>>m2>>n2;

    if(n1!=m2)
    {
        cout<<"\nMatrices can't be multiplied. "<<endl;
        exit(0);
    }

    cout<<"\nEnter elements of first matrix row-wise : ";
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            cin>>a[i][j];



    cout<<"\nEnter elements of second matrix row-wise : ";
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            cin>>b[i][j];


    for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
            for(k=0;k<n1;k++)
                c[i][j]+=a[i][k]*b[k][j];

    cout<<"\nMatrix after multiplication : "<<endl;

    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
            cout<<"  "<<c[i][j]<<"\t\t";
        cout<<endl;
    }


    return 0;
}
