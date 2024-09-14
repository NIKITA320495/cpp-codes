#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
void create(node *head,int info)
{
    node *nn=new node;
    nn->info=info;
    nn->next=head;
    head=nn;
}
void mergell(node *head1,node *head2)
{
    node *p1=head1;
    node *p2=head2;
    node *dummynode=new node;
    node *p3=dummynode;
    while((p1!=nullptr) && (p2!=nullptr))
    {
        if(p1->info<p2->info)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
     while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

}
void display( node *head)
{
    node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->info;
        temp=temp->next;
    }
}
int main()
{
    node *head1=nullptr;
    node *head2=nullptr;
    create(head1,1);
    create(head1,4);
    create(head1,5);
    create(head1,7);
    create(head1,8);
    display(head1);
}
