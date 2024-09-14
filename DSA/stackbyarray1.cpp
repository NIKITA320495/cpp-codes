#include<iostream>
using namespace std;
int a[100];
int top=-1;
int n;
void push(int val)
{
    if (top==n)
    {
        cout<<"stack overflow";
    }
    else
    {
        top=top+1;
        a[top]=val;

    }
}
void pop()
{
    if (top==-1)
    {
        cout<<"Stack underflow";
    }
    else
    {
        top=top-1;
    }
}
void display()
{
    for (int i=0;i<=top;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int x;
    char ch;
    do
    {
        cout<<"enter a value to insert";
        cin>>x;
        push(x);
        cout<<"Do you want more";
        cin>>ch;
        n++;
    }while(ch=='y');
    display();
    cout<<endl;
    pop();
    display();
}
