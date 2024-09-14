#include<iostream>
using namespace std;
int main()
{
    int size;
    int element;
    int flag=0;
    int pos;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"enter the " <<i+1<<" element";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"Enter the element to search for";
    cin>>element;
    int l =0;
    int h= size-1;
    while(h>=l)
    {
         int m=(l+h)/2;
         if (arr[m]==element)
         {
             pos=m;
             cout<<"element found at position"<<m;
             break;
         }
         else if(arr[m]<element)
         {
             l=m+1;
         }
         else
         {
             h=m-1;
         }
    }
    if(h<l)
    {
        cout<<"element not found";
    }
}
