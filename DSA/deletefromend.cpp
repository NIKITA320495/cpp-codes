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
node *temp1;
node *temp2;
void deletefromend()
{
    temp1=start;
    temp2=start;
    while(temp1->next!=nullptr)
    {
        temp2=temp1;

        temp1=temp1->next;

    }
cout<<temp2->info<<endl;
temp2->next=nullptr;
free(temp1);


}
void display()
{ node *temp1;
    temp1=start;
    cout<<"Start"<<start->info;
    while(temp1!=nullptr)
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
    deletefromend();
    display();
}

