#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    return 1;
    return fib(n-1)+fib(n-2);
}
int lastfib(int n)
{
    int f=fib(n);
    return f%10;
}
int main()
{
    int f=lastfib(10);
    cout<<f;
}
