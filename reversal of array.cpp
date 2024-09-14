#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"enter the " <<i+1<<" element";
        cin>>arr[i];
    }
   int b[size];
   int i,j;
   for (i=size-1;i>=0;i--)
   {
       cout<<arr[i]<<"\t";

   }

}
