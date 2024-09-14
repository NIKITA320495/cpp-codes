#include<iostream>
using namespace std;
int main()
{
    int arr[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"enter element "<<i+1<<j+1;
            cin>>arr[i][j];
        }
    }
    int n=3;
    int m=5;
    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=m-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<arr[row_start][i];
        }
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<arr[i][col_end];
        }
        col_end--;
        for(int i=col_end;i>=col_start;i--)
        {
            cout<<arr[row_end][i];
        }
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
            cout<<arr[i][col_start];
        }
        col_start++;
    }

}
