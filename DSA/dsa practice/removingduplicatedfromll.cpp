#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void insertend(int info)
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
    node *temp1;
    temp1=start;
    cout<<"Start";
    while(temp1!=nullptr)
    {
        cout<<temp1->info<<"->";
        //temp2->info=temp1->info;
        temp1=temp1->next;

    }
        cout<<"END";
        cout<<"start value"<<start->info<<endl;

}
void removeduplicate()
{
    node *temp1=start->next;
    node *temp2=start;
    while(temp1!=nullptr)
    {
        if(temp1->info==temp2->info)
        {
            node*p=temp1;
            temp2->next=temp1->next;
            temp1=temp1->next;
            delete p;
        }
        else{
        temp2=temp1;
        temp1=temp1->next;
        }
    }
}
int main()
{
    insertend(1);
    insertend(1);
    insertend(1);
    insertend(2);
    insertend(3);
    insertend(3);
    removeduplicate();
    display();
}
