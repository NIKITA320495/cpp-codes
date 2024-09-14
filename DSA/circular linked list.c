#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void create(int info)
{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=start;
    start=newnode;
}
node *temp=nullptr;
void circularll()
{   temp=start;
    while(temp->next=nullptr)
    {
        temp=temp->next;
    }
    temp->next=start;
    cout<<"start value"<<(temp->next)->info;
}
int main()
{
    int x;
    char ch;
    do
    {
        cout<<"enter the values";
        cin>>x;
        create(x);
        cout
    }
}


