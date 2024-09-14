#include<iostream>
using namespace std;
int maxtilli(int arr[],int i)
{
    int maxindex=0;
    for(int j=0;j<i;j++)
    {
        for(int k=j+1;k<i;k++)
        {
            if(arr[maxindex]<arr[k])
                maxindex=k;
        }
    }
    return arr[maxindex];
}
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
    int key;
    cout<<endl;
    cout<<"Enter the value of index till which you want to find the maximum value";
    cin>>key;
    int maxidx=maxtilli(arr,key);
    cout<<maxidx;
}
