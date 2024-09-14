#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr;
    ptr=arr;


    for (int i=0;i<5;i++)
    {
        cout<<"Enter the element"<<i+1;
        cin>>*ptr;
        ptr++;
    }
    ptr=arr;
    for(int i=0;i<5;i++ )
    {
        cout<<*ptr<<"\t";
        ptr++;
    }
    int sum=0;
    ptr=arr;
    for(int i=0;i<5;i++)
    {
        sum=sum+*ptr;
        ptr++;


    }
    cout<<"\nsum="<<sum;
}
