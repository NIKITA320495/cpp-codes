#include<iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    ptr=arr;
    for (int i=0;i<size;i++)
    {

        cout<<"enter the " <<i+1<<" element";
        cin>>*ptr;
        ptr++;
    }
    ptr=arr;
    for(int i=0;i<size;i++)
    {
        cout<<*ptr<<"\t";
        ptr++;
    }
}
