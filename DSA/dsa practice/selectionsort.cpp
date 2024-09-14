#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
               swap(arr[j],arr[i]);
            }
        }

    }
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
    selectionsort(arr,n);
     cout<<" Sorted Array:";
      for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<",";
    }

}
