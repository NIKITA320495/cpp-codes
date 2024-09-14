#include<iostream>
using namespace std;
int main()
{
    int x;
    x=10;
    int *xptr;
    xptr=&x;
    int **ptr;
    ptr=&xptr;
    cout<<*(*ptr);
}
