#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
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
    cout<<"Enter the element you want to search";
    cin>>key;
    int idx=linearsearch(arr,n,key);
    cout<<idx;

}
