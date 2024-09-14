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
            if(i==j)
            {
                cout<<a[i][j];
                cout<<"\t";
            }

        }
        cout<<"\n";
    }

}
