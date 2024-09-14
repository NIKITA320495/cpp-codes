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
    cout<<"\nEnter the element to search for ";
    cin>>element;
    for (int i=0;i<size;i++)
    {
        if (element==arr[i])
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"Element present at position"<<pos+1;
    }
    else
    {
        cout<<"Element is not present";
    }
}
