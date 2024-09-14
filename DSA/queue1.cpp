#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *front=nullptr;
node *End=nullptr;
void insert_at_end(int info)
{

    node *newnode= new node;
    newnode->info=info;
    newnode->next=nullptr;
    if (End==nullptr)
    {
         front=End=newnode;
    }
    else
    {
       while(End->next!=nullptr)
       {
           End=End->next;

       }
       End->next=newnode;

       }

    }

void del()
{
    node * temp;
    temp=front;
    if(front==nullptr)
    {
        cout<<"Queue underflow";

    }
    else
    {
        temp=temp->next;
        free(front);
        front=temp;


    }
}

void display()
{
    node *temp1;
    temp1=front;
    cout<<"Front";
    if(front==nullptr)
    {
        cout<<"Queue empty";
    }
    else{
    while(temp1!=nullptr)
    {
        cout<<temp1->info<<"->";
        //temp2->info=temp1->info;
        temp1=temp1->next;

    }
        cout<<"END";
        cout<<"start value"<<front->info<<endl;


}
}
int main()
{
    int x;char choice;
    do
    {
    cout<<"Enter";
    cin>>x;
    insert_at_end(x);
    cout<<"more";
    cin>>choice;
    }while(toupper(choice)=='Y');
    display();
    del();
    display();


}

