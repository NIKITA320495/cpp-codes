#include<iostream>
using namespace std;
int add(int a,int b)
{
    int *xptr=&a;
    int *yptr=&b;
    int sum=*xptr+*yptr;
    return sum;
}
int main()
{
    int x=10;
    int y=20;
    int s=add(x,y);
    cout<<s;
}
