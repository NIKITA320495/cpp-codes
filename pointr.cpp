#include<iostream>
using namespace std;
int main()
{
    int x=1;
    int z[2]={10,11};
    int *p=nullptr;
    p=&x;
    p=&z[1];
    *(&z[0]+1)+=3;
    cout<<x<<endl;
    cout<<z[0]<<endl;
    cout<<z[1];
}
