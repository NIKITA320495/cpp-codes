#include<iostream>
using namespace std;
struct node{
int info;
node *next;
};
node *start=nullptr;

void create(int info)
{
   node *newnode =new node;
   newnode->info=info;
   newnode->next=start;
   start=newnode;
}
node *temp;
void insert(int x)
{
    int v;
    cout<<"Enter the value to be inserted";
    cin>>x;
    int val;
    cout<<"Enter the value after which you want to insert";
    cin>>val;
    node *newnode1=new node;
    newnode1->info=x;
    temp=start;
    while(temp!=nullptr)
    {
        if(temp->info==val)
        {
           newnode1->next=temp->next;
           temp->next=newnode1;
           temp=newnode1;

           break;
        }
        temp=temp->next;
    }

}
void display()
{
    node *temp1;
    temp1=start;
    cout<<"Start="<<start->info;
    while(temp!=nullptr)
    {
        cout<<temp1->info<<"->";
        temp1=temp1->next;
    }
        cout<<"END";
}


int main()
{
    int x;
    char choice;
    do
    {
        cout<<"Enter:";
        cin>>x;
        create(x);
        cout<<"More";
        cin>>choice;
    }while(toupper(choice)=='Y');
    insert(x);
    display();
}
