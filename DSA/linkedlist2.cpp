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

    node *newnode=new node;
    newnode->info=info;
    newnode->next=start;
    start=newnode;
}
void display()
{
    node *temp;
    temp=start;
    cout<<"Start";
    while(temp!=nullptr)
    {
        cout<<temp->info<<"->";
        temp=temp->next;
    }
        cout<<"END";
}

int main()
{
    int x;char choice;
    do
    {
    cout<<"Enter";
    cin>>x;
    create(x);
    cout<<"more";
    cin>>choice;
    }while(toupper(choice)=='Y');
    display();


}
