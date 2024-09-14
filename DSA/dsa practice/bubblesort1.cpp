#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]);
        }
        counter++;
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
    bubblesort(arr,n);
     cout<<" Sorted Array:";
      for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<",";
    }

}

