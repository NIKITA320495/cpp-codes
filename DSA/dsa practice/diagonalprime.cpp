#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool prime(int n)
{
    int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==1||n==1)
    {
        return false;
    }
    if(flag==0)
        return true;
}
int largestprime(vector<vector<int>> arr)
{
    int sum=0;
    int m=arr.size();
    vector<int>p;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                if(i==j||i+j==m-1)
                {
                    if(prime(arr[i][j])==true)
                    {
                        p.push_back(arr[i][j]);
                    }
                }
            }
        }
        sort(p.begin(),p.end());
        return p[p.size()-1];
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
    int lp=largestprime(arr);
    cout<<lp;
}
