#include<iostream>
using namespace std;
float area()
{
    float base; float height;
    cin>>base>>height;
    float a= 0.5*base*height;
    return a;

}
int main()
{
    float ar;
    ar=area();
    cout<<ar;

}
