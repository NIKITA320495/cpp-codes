#include<iostream>
using namespace std;
int main()
{
    char name[100];
    char *ptr;
    ptr=name;
    cout<<"Enter your name";
    cin>>ptr;
    cout<<name;
    int count=0;
    ptr=name;
    while(*(ptr++)!='\0')
    {
        count=count+1;


    }
    cout<<"\n"<<count;
}

