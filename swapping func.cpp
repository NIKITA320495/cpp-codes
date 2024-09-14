#include<iostream>
using namespace std;
int swa()
{
    int a;
    int b;
    int c;
    a=10;
    b=20;
    c=a;
    a=b;
    b=c;
    cout<<a<<","<<b;
}
int main()
{
    swa();
}
