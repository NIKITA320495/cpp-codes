#include<iostream>
using namespace std;
struct node
{   int info;
    node *next;
};
node *start=nullptr;
void create_list(int info)
{
    node *newnode= new node;
    newnode->info=info;
    newnode->next=nullptr;
    start=newnode;
}
void display()
{
    cout<<start->next;
    if (start==nullptr)
    {cout<<"Empty";}
    else
    {   node *temp=start;
        cout<<"Start";
        while(temp!=nullptr)
        {
        cout<<temp->info<<"->";
        temp=temp->next;
        }
        cout<<"END";
        //delete(temp);

    }

}
/*insert_beg(int info)
{
    if (start==nullptr)
    {
        cout<<"Empty";
    }
    else{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=nullptr;
    node *temp=new node;
    temp=start->next;

    }
}*/
node *newnode= new node;
node *newnode1= new node;

int main()
{
    char choice;
    int x;

    do{
    cout<<"Enter the element";
    cin>>x;
    if(start==nullptr){

    newnode->info=x;
    start->next=newnode;
    newnode->next=nullptr;
    newnode1->next=newnode;
    }
    else{

    newnode1->info=x;

    newnode1->next=newnode1;
    }
    cout<<"More ??";
    cin>>choice;
    }
    while(toupper(choice)=='Y');

    display();

}
