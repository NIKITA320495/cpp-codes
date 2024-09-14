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
void deletefrombeg()
{
    temp=start;
    start=start->next;
    free(temp);
}
void display()
{ node *temp1;
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
        cout<<"Enter the value to enter";
        cin>>x;
        create(x);
        cout<<"more";
        cin>>choice;
    }while(toupper(choice)=='Y');
    deletefrombeg();
    display();
}
