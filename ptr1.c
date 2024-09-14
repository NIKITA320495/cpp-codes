#include<iostream>
using namespace std;
int main()
{
    int x;
    x = 10;
    int *xptr;
    xptr = &x;
    cout<<"x="<<x;
    cout<<"\nx="<<*xptr;


}
