#include<iostream>
#include<vector>
using namespace std;
vector<int> targetIndices(vector<int>arr, int target)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
                minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }
    vector<int>idxarr;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
            idxarr.push_back(i);
    }
    return idxarr;
}
int main()
{
    vector<int>arr={1,2,5,2,3};
    vector<int>sorted=targetIndices(arr,2);
    for(int i=0;i<sorted.size();i++)
    {
        cout<<sorted[i];
    }
}
