#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>arr){
     int m=arr.size();
     vector<vector<int>>tarr;
     tarr=arr;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                tarr[i][j]=arr[j][i];
            }
        }
        return tarr;
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
    vector<vector<int>>tarr=transpose(arr);
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<tarr[i][j]<<" ";
        }
        cout<<endl;
    }
 }
