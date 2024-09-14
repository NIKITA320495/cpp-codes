#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Enter the element";
            cin>>a[i][j];

        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<a[i][j];
            cout<<"\t";

        }
        cout<<"\n";
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Enter the element";
            cin>>b[i][j];

        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<b[i][j];
            cout<<"\t";

        }
        cout<<"\n";

    }
    int c[3][3];
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
       for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<c[i][j];
            cout<<"\t";

        }
        cout<<"\n";
}
}oo
