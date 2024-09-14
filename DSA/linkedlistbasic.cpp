#include<iostream>
using namespace std;
struct node{
    int info;
    node *next;
};
int main()
{
    int x=20;
    node *newnode=new node;
    node *start=new node;
    newnode->info=x;
    newnode->next=start;
    start=newnode;
    cout<<"Node.info="<<newnode->info<<endl;
    cout<<"Start->next"<<start->next<<endl;
    cout<<"newnode address"<<newnode->next<<endl;


}
