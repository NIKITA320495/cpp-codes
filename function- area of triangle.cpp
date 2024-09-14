#include<iostream>
using namespace std;
int area(int base , int height)
{
    cout<<0.5*base*height;
}
int main()
{
    int x ;int y;
    cout<<"enter the value of x and y";
    cin>>x>>y;
    area(x,y);
}
