#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter how many elements";
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter";
        cin>>arr1[i];
    }
     int n2;
    cout<<"enter how many elements";
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter";
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        arr3[i+n1]=arr2[i];
    }
    for(int i=0;i<(n1+n2);i++)
    {
        cout<<arr3[i];
    }

}

