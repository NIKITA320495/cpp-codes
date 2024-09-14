#include<iostream>
#include<cmath>
using namespace std;
void printheap(int heap[],int n)
{
    int levels = log2(n) + 1; // Calculate the number of levels in the heap
    int idx = 0; // Index to iterate through the heap array

    for (int i = 0; i < levels; i++) {
        int elementsInLevel = pow(2, i); // Number of elements in the current level

        for (int j = 0; j < elementsInLevel && idx < n; j++) {
            cout << heap[idx] << " ";
            idx++;
        }

        cout << endl;
    }
}
void deletefromheap(int heap[],int n)
{
    int last=heap[n-1];
    n=n-1;
    int ptr=0,left=1,right=2;
    heap[ptr]=last;
    while(left<=n)
    {
        if(heap[ptr]>=heap[left] && heap[ptr]>=heap[right])
            break;
          if (right <= n && heap[right] > heap[left]) {
            swap(heap[ptr], heap[right]);
            ptr = right;
        } else {
            swap(heap[ptr], heap[left]);
            ptr = left;
        }
        left=2*ptr+1;
        right=2*ptr+2;
    }
}
int main()
{
    int heap[8]={54,45,36,27,29,18,21,11};
    int n=8;
    deletefromheap(heap,8);
    printheap(heap,n-1);
}
