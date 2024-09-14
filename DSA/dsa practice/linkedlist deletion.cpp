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
void begdeletion()
{
    node *temp=start;
    start=start->next;
    free(temp);
}
void enddeletion()
{
    node *temp1=start;
    node *temp2=start;
    while(temp1->next!=nullptr)
    {
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=nullptr;
    free(temp1);
}
void middeletion(int val)
{
    node *temp1=start;
    node *temp2=start;
    while(temp1->next!=nullptr)
    {    temp2=temp1;
        temp1=temp1->next;
        if(temp1->info==val)
        {
            break;
        }
    }
    temp2->next=temp1->next;
    free(temp1);

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
    beginsertion(5);
    beginsertion(19);
    beginsertion(22);
    display();
    begdeletion();
    cout<<endl;
    display();
    enddeletion();
    cout<<endl;
    display();
    middeletion(5);
    cout<<endl;
    display();
}
