#include<iostream>
#include<vector>
using namespace std;
int countNegatives(vector<vector<int>>arr){
    int count=0;
    int m=arr.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]<0)
                {
                    count++;
                }
            }
        }
        return count;
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
    int output=countNegatives(arr);
    cout<<output;
}
