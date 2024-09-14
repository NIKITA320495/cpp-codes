#include<iostream>
using namespace std;

struct node
{
    int info;
    node *next;
};

node *start = nullptr;

void insertBeg(int info)
{
    node *newNode = new node();
    newNode->info = info;
    if (start == nullptr) {
        start = newNode;
    }
    else {
        newNode->next = start;
        start = newNode;
    }
}
void insertend(int info)
{
    node *temp=start;
    node *newnode= new node;
    newnode->info=info;
    newnode->next=nullptr;
     if (temp==nullptr)
    {
         start=newnode;
         temp=start;
    }
    else{
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
void insertmid(int info,int val)
{
    node *newnode=new node;
    node *temp1=start;
    newnode->info=info;
    while(temp1->next!=nullptr)
    {
        temp1=temp1->next;
        if(temp1->info==val)
        {
            break;
        }
    }
    newnode->next=temp1->next;
    temp1->next=newnode;
}
void display()
{
    node *temp = start;
    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
}
bool detectcycle()
{
    node *slow=start;
    node *fast=start;
    bool ans=false;
    while(fast!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            ans=true;
        }
    }
    return ans;
}
int main()
{
    node *nn = new node();
    insertend(1);
    insertend(2);
    insertend(3);
    insertmid(7,2);
    display();
    bool a=detectcycle();
    cout<<a;
}
