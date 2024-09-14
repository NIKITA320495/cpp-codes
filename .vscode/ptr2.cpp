#include<iostream>
using namespace std;
int swap(*xptr,*yptr)
    {
        int a;
        int b;
        xptr=&a;
        yptr=&b;
        int *temp;
        *xptr=*yptr;
        *yptr=*temp;
        *temp=*xptr;
        cout<<*xptr<<*yptr;
    }
int main()
{
    int x=10;
    int y=20;
    swap(&x,&y);
}
