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
    node *temp=start;
    node *newnode=new node;
    newnode->info=info;
    if(start==nullptr)
    {
        start=newnode;
        newnode->next=newnode;
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        newnode->next=start;
        temp->next=newnode;
        start=newnode;
    }
}
void endinsertion(int info)
{
    node *newnode=new node;
    newnode->info=info;
    node*temp=start;
      if(start==nullptr)
    {
        start=newnode;
        newnode->next=newnode;
    }
    else
    {
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        newnode->next=start;
        temp->next=newnode;
    }
}
void begdeletion()
{
    node *temp=start;
    node *temp1=start;
    while(temp->next!=start)
    {
        temp=temp->next;
    }
    temp->next=start->next;
    start=start->next;
    free(temp1);
}
void enddeletion()
{
    node*temp1=start;
    node*temp2=start;
    while(temp1->next!=start)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=start;
    free(temp1);
}
void display()
{
    node *temp=start;
    do
    {
        cout<<temp->info<<"<";
        temp=temp->next;
    }while(temp!=start);
}
int main()
{
    beginsertion(1);
    beginsertion(2);
    beginsertion(3);
    beginsertion(4);
    display();
    cout<<endl;
    endinsertion(6);
    endinsertion(7);
    endinsertion(9);
    display();
    begdeletion();
    cout<<endl;
    display();
    cout<<endl;
    enddeletion();
    display();
}
