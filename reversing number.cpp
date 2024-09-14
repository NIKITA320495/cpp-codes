#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number to reverse it";
    cin>>num;
    int quo,rem,rev;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        quo=num/10;
        num=quo;
    }
    cout<<rev;
}
