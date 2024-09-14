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
void display()
{
    node *temp=start;
    while(temp->next!=nullptr)
    {
        cout<<temp->info;
        temp=temp->next;
    }
}
int length()
{
    int length=0;
    node *temp=start;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
        length++;
    }
    return length;
}
void appendknodes(int k)
{

    node *temp1=start;
    node *temp2=start;
    node *temp3=start;
    int l=length();
    int count=1;
    node *temp=start;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    while(temp1->next!=nullptr){
        temp2=temp1;
        temp1=temp1->next;
    if(count==l-k)
    {
        temp->next=start;
        temp2->next=nullptr;
        temp1=start;
        break;
    }
    count++;
    }

}
int main()
{
    create(1);
    create(2);
    create(3);
    create(4);
    create(5);
    display();
    cout<<endl;
}
