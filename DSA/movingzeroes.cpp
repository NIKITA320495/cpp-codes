#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,0,0,0,4,9};
    int count=0,len=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
       len++;
    }
    int temp;
    int i,j,l;
    int k;
    int pos,item;
    for(l=0;l<len;l++){
    for(i=0;i<len;i++)
    {
       if((arr[i]==0))
       {
           pos=i;
           item=arr[pos];
           break;
       }
    }
    for(k=pos;k<len;k++)
    {
        arr[k]=arr[k+1];
    }
    arr[len-1]=item;
    }
    for(int j=0;j<len;j++)
    {
    cout<<arr[j]<<endl;
    }

}

