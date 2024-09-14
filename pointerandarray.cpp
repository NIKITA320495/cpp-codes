#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3};
    int *ptri=a;
    cout<<*ptri<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptri)<<endl;
}
