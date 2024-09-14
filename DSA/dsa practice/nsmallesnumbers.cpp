#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>nsmall(vector<int>arr,int d)
{
    int n=arr.size();
    int minindex;
    vector<int>nsmallarr;
    vector<int>sortedArr=arr;
    for(int k=0;k<d;k++){
          partial_sort(sortedArr.begin() + k, sortedArr.begin() + k + 1, sortedArr.end());

        // Add the next smallest element to the result
        nsmallarr.push_back(sortedArr[k]);
   }
    return nsmallarr;
}
int main()
{
    vector<int>arr=nsmall({5,3,7,1,2,8},3);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
}

