#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int sum=0;
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<sum;

}
