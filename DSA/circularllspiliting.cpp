#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;

node *create(int info)
{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=nullptr;
    node *temp=start;
    if (start==nullptr)
    {
        newnode->next=newnode;
        start=newnode;
    }
    else{
    while(temp->next!=start)
       {
           temp=temp->next;

       }
       temp->next=newnode;
       newnode->next=start;
       start=newnode;
    return newnode;
}
}
void display(node *ll)
{
    node *temp1=start;
    do
    {
        cout<<temp1->info<<"<";
        temp1=temp1->next;
    } while(temp1!=start);
}
int count;
void split()
{
    node *ll1;
    node*temp1=start;
    for(int i=0;i<(count)/2;i++)
        {
            ll1=create(temp1->info);
            ll1=ll1->next;
            temp1=temp1->next;
        }
        display(ll1);


}

int main()
{
    int x;
    node *cll;
    char ch;
    do
    {
        cout<<"Enter the value of x";
        cin>>x;
        cll=create(x);
        cout<<"Do you want to continue";
        cin>>ch;
        count++;
    }while(ch=='y');
    display(cll);
    cout<<endl;
    split();
}
