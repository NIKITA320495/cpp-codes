#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void beginsertion(int info)
{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=start;
    start=newnode;
}
void endinsertion(int info)
{
    node *newnode=new node;
    newnode->info=info;
    node *temp=start;
    newnode->next=nullptr;
    if(temp==nullptr)
    {
        temp=start;
        start=newnode;
    }
    else
    {
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void midinsertion(int info,int val)
{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=nullptr;
    node *temp=start;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
        if(temp->info==val)
        {
            break;
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display()
{
    node *temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->info<<"<";
        temp=temp->next;
    }
}
int main()
{
    endinsertion(12);
    endinsertion(1);
    endinsertion(9);
    endinsertion(3);
    endinsertion(8);
    midinsertion(177,9);
    display();
}
