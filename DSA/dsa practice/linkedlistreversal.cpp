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
node *pre=nullptr;
node *curr=nullptr;
node *nextptr=nullptr;
void reversal()
{
    curr=start;
    while(curr!=nullptr){
    nextptr=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nextptr;
    }
    start=pre;
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
    beginsertion(12);
    beginsertion(1);
    beginsertion(6);
    beginsertion(9);
    beginsertion(0);
    display();
    cout<<endl;
    reversal();
    display();
}
