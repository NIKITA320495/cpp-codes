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
    cout<<endl;
    cout<<"Sum of arrays";
    cout<<endl;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }
}
