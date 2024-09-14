#include<iostream>
using namespace std;
void heapify(int heap[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child
\
    // If left child is larger than root
    if (left < n && heap[left] > heap[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && heap[right] > heap[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapify(heap, n, largest);
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;--i)
    {
        heapify(arr,n,i);
    }
}
void heapSort(int arr[], int n) {
    buildheap(arr,n);
    for (int i = n - 1; i > 0; --i) {
        swap(arr[0], arr[i]);
        heapify(arr, i,0);
    }
}
int main()
{
    int heap[5]={9,4,6,1,8};
    heapSort(heap,5);
    for(int i=0;i<5;i++)
        cout<<heap[i];
}
