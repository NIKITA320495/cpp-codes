#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            arr1[i]=arr[i]*arr[i+j];
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<endl;
    }
}
