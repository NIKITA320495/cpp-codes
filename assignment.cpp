#include<iostream>
using namespace std;
float f(int x,int y)
{
    float p,s;
    int i;
    for(s=1,p=1,i=1;i<y;i++)
    {
        p*=x/i;
        s+=p;
    }
    return s;
}
int main()
{
    f(10,100);
}
