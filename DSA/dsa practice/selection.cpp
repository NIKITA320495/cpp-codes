#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    int minindex=0;
    for(int i=0;i<n;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
int main()
{
    int arr[5]={5,3,8,1,9};
    selectionsort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
