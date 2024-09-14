#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& arr, int key)
{
    int n=arr.size();
    int l=0;
    int h=n-1;
    int pos;
    if(key>arr[h-1])
    {
        return h;
    }
    while(l<h)
    {
        int m=(l+h)/2;
        if(arr[m]==key)
        {
            return m;
        }
        else if(arr[m]<key)
            l=m+1;
        else if(arr[m]>key)
            h=m-1;

    }
      return l;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    int p=searchInsert(arr,5);
    cout<<p;
}
