#include<iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout<<"enter the number of rows";
    cin>>row;
    cout<<"enter the number of columns";
    cin>>col;
    int a[row][col];
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<"Enter the elements";
            cin>>a[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for ( int j=0;j<col;j++)
        {
            cout<<a[i][j];
            cout<<"\t";

        }
        cout<<"\n";
    }
    int b[row][col];
    cout<<"enter the number of rows";
    cin>>row;
    cout<<"enter the number of columns";
    cin>>col;

    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            cout<<"Enter the elements";
            cin>>b[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for ( int j=0;j<col;j++)
        {
            cout<<b[i][j];
            cout<<"\t";

        }
        cout<<"\n";
    }
    int c[row][col];
    for (int i=0;i<row;i++)
    {
        for ( int j=0;j<col;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }


}

 for (int i=0;i<row;i++)
    {
        for ( int j=0;j<col;j++)
        {
            cout<<c[i][j];
            cout<<"\t";

        }
        cout<<"\n";
    }
}

