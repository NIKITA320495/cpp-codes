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
void insertion(int arr[],int n)
{
    int curr;
    for(int i=1;i<n;i++)
    {
        curr=arr[i];
        int j=i-1;
        while(arr[j]>curr&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}
void bubblesort(int arr[],int n)
{
    int counter=1;
     while(counter<n)
     {
         for(int i=0;i<n-counter;i++)
         {
             if(arr[i+1]<arr[i])
             {
                 swap(arr[i],arr[i+1]);
             }
         }
         counter++;
     }
}
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 &&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]={5,3,8,1,9};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}
