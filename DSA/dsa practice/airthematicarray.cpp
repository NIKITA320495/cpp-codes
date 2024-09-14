#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements you want to enter";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter elements";
        cin>>arr[i];
    }
    cout<<"Array:";
      for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<",";
    }
    int diff;
    for(int i=0;i<n-1;i++)
    {
        diff=arr[i+1]-arr[i];
        cout<<diff<<endl;
        for()
    }
}
