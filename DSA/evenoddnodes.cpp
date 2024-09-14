#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void create(int info){
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

}
void evenodd()
{
    node *odd=start;
    node *even=odd->next;
    node*evenstart=odd->next;
    while((odd->next!=nullptr &&even->next!=nullptr))
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
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
    evenodd();
    display();
}
