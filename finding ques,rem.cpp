#include<iostream>
using namespace std;
int rem(int c, int d);
int que(int a, int b)
{
    int q;
    q=a/b;
    return q;
}
int main()
{
    int x;
    int y;
    int quo;
    cout<<"enter two numbers";
    cin>>x>>y;
    quo=que(x,y);
    cout<<quo<<"\n";
    rem(x,y);
}
rem(int c , int d)
{
    int r;
    r=c%d;
    cout<<r;
}
