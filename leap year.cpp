#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year";
    cin>>year;
    if((year%400==0)||(year%400==4))
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not leap year";
    }
}
