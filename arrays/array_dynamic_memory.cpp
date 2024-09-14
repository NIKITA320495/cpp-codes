#include<iostream>
using namespace std;
int main()
{
    int *arr=nullptr;
    arr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
    cout<<"Enter elements";
    cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
   cout<<arr[i]<<"\t";
    }

}
