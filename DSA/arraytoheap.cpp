#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }
      if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }

}
void buildheap(int arr[],int n)
{

     for (int i =0 ; i <n / 2 - 1; i++) {
        heapify(arr, n, i);
}
}
int main()
{
    int arr[6]={10,15,21,30,18,19};
    int n=6;
    buildheap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
