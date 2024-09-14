#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many values";
    cin>>n;
    int *arr=nullptr;
    arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
    cout<<"Enter elements";
    cin>>arr[i];

    }
    cout<<"Entered array:";
    for(int i=0;i<n;i++)
    {
   cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    int *arr2=nullptr;
    arr2=(int *)calloc(n,sizeof(int));
    int j;
    cout<<"Reversed array:";
    for (int i=n-1,j=0;i>=0;i--,j++)
    {
        arr2[j]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<"\t";
    }

}

