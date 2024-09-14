#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void insert_at_end(int info)
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
    /*cout<<"\nINSERTION AT END"<<endl;
    do
    {
    cout<<"Enter";
    cin>>x;
    insert_at_end(x);
    cout<<"more";
    cin>>choice;
    }while(toupper(choice)=='Y');
    display();*/

}

