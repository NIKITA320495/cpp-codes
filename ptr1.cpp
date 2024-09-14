#include<iostream>
using namespace std;
int main()
{
    int x,y;
    x = 10;
    y=20;
    int *xptr,*yptr;
    xptr = &x;
    yptr=&y;
    cout<<"x="<<x;
    cout<<"\nx="<<*xptr;
    cout<<"\nAddress of x="<<xptr;
    cout<<"\nAddress of x="<<&x;
    cout<<"\nAddress of x="<<&(*xptr);
    cout<<"\nAddress of xptr="<<&xptr;
    cout<<"\nx+y="<<*xptr+*yptr;
}

