#include<iostream>
using namespace std;
int main()
{
    int *xptr;
    int x=10;
    xptr=&x;
    cout<<xptr<<"\n";
    cout<<*xptr;

}