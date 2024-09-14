#include<iostream>
using namespace std;
void insertionheap(int heap[],int n,int val)
{
    int pos=n;
    heap[n]=val;
    ++n;
    while(pos>0)
    {
        int par=(pos-1)/2;
        if(heap[pos]<=heap[par])
            break;
        else
        {
            swap(heap[pos],heap[par]);
            pos=par;
        }
    }
}
void deleteheap(int heap[],int n)
{
    int last=heap[n-1];
    n=n-1;
    int ptr=0;
    int left=1;
    int right=2;
    while(left<=n)
    {
        if(heap[ptr]>=heap[left]&&heap[ptr]>=heap[right])
            break;
        else if(heap[ptr]<heap[left]&&left<=n)
        {swap(heap[ptr],heap[left]);
        ptr=right;}
        else
        {
            swap(heap[ptr],heap[right]);
            ptr=left;
        }
        left=2*ptr+1;
        right=2*ptr+2;
    }
}
int main()
{
    int heap[8]={72,54,663,27,36,45,61,18};
    int n=8;
    insertionheap(heap,8,90);
    for(int i=0;i<9;i++)
    {
        cout<<heap[i];
    }
    deleteheap(heap,9);
    cout<<endl;
     for(int i=0;i<8;i++)
    {
        cout<<heap[i];
    }
}
