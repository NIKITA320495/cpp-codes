#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    int flag=0;
    for (i=2;i<=n;i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if (flag==0)
    {
        cout<<"the number is prime";
    }
    else
    {
        cout<<"the number is not prime";
    }
}
