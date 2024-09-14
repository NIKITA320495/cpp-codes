#include<iostream>
#include<vector>
using namespace std;
int sum(vector<vector<int>> arr)
{
    int sum=0;
    int m=arr.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                if(i==j||i+j==m-1)
                {
                    sum+=arr[i][j];
                }

            }
        }

    return sum;
}
int main()
{
    vector<vector<int>>arr(3, vector<int>(3, 0));
    int x;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         cout<<"enter";
         cin>>arr[i][j];
        }
    }
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int s=sum(arr);
cout<<s;
}
