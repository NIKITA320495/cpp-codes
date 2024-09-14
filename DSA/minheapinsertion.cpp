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
void insertheap(int heap[],int n,int val)
{
    int pos=n;
    heap[n]=val;
    ++n;
    while(pos>0)
    {
        int par=(pos-1)/2;
        if(heap[pos]>=heap[par])
            break;
        else
        {
            swap(heap[pos],heap[par]);
            pos=par;
        }
    }

}
int main()
{
    int heap[8]={5, 10, 15, 20, 25, 30, 35, 40};
    int n=8;
    insertheap(heap,8,11);
     printheap(heap,8);
}

