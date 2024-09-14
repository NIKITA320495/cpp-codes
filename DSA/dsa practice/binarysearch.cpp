#include<iostream>
using namespace std;
int binarysearch(int arr[],int key,int l,int h)
{
    int m=(l+h)/2;
    if(arr[m]==key)
    {
        return m;
    }
    else if(arr[m]<key)
        return binarysearch(arr,key,m+1,h);
    else if(arr[m]>key)
        return binarysearch(arr,key,l,m-1);
}
int main()
{
    int n;
    cout<<"How many elements you want to enter";
    cin>>n;
     cout<<"enter elements in increasing order";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array:";
      for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<",";
    }
    int key;
    cout<<endl;
    cout<<"Enter the element you want to search";
    cin>>key;
    int idx=binarysearch(arr,key,0,n-1);
    cout<<idx;
}
