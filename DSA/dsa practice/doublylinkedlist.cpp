#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *pre;
};
node *start=nullptr;
void beginsertion(int info)
{
    node *newnode=new node;
    newnode->info=info;
    if(start==nullptr)
    {
        start=newnode;
        start->pre=nullptr;
        start->next=nullptr;
    }
    else
    {
        newnode->pre=nullptr;
        newnode->next=start;
        start->pre=newnode;
        start=newnode;
    }
}
void endinsertion(int info)
{
    node*newnode=new node;
    newnode->info=info;
    node *temp=start;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=nullptr;
    newnode->pre=temp;
}
void begdeletion()
{
    node *temp=start;
    start=start->next;
    start->pre=nullptr;
    free(temp);
}
void enddeletion()
{
    node *temp=start;
    node *temp1=start;
    while(temp->next!=nullptr)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=nullptr;
    free(temp);
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
    beginsertion(1);
    beginsertion(2);
    beginsertion(3);
    beginsertion(4);
    display();
    endinsertion(6);
    endinsertion(7);
    endinsertion(8);
    endinsertion(9);
    cout<<endl;
    display();
    begdeletion();
    cout<<endl;
    display();
    enddeletion();
    cout<<endl;
    display();
}
