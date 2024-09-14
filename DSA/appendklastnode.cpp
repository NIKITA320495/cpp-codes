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
    node *temp;
    node *newnode= new node;
    newnode->info=info;
    temp=start;
    newnode->next=nullptr;
    if (temp==nullptr)
    {
         start=newnode;
         temp=start;
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
int length()
{node *temp=start;
    int length=0;
    while(temp!=nullptr)
    {
        length++;
        temp=temp->next;
    }
    return length;
}
void append(int k)
{
    int l;
    l=length();
    node*temp1=start;
    node*temp2=start;
    node*temp=start;
    int count=1;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=start;
    cout<<temp->next->info<<endl;
    while(temp1!=nullptr)
    {
        temp2=temp1;
        temp1=temp1->next;
        if(count==l-k)
        {

            break;
        }
        count++;
    }
      start=temp1;
      temp2->next=nullptr;
      cout<<temp1->info<<endl;
      cout<<temp2->info<<endl;
}
void display()
{
    node *temp1;
    temp1=start;
    while(temp1!=nullptr)
    {
        cout<<temp1->info<<"->";
        temp1=temp1->next;

    }
}
int main()
{
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    create(6);
    display();
    cout<<endl;
    append(2);
    display();
}
