#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void beginsertion(int info)
{
    node *newnode=new node;
    newnode->info=info;
    newnode->next=start;
    start=newnode;
}
void display()
{
    node *temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->info<<"<";
        temp=temp->next;
    }
}
int countnode(node *start)
{
    int count=0;
    node *temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->info<<"<";
        count=count+1;
        temp=temp->next;
    }
    return count;
}
void swaplist(node *start,int k)
{
    node *temp=start;
    int c=countnode(start);
    int arr[c];
    for(int i=0;i<c;i++)
    {
        arr[i]=temp->info;
        temp=temp->next;
    }
    int t=arr[k-1];
    arr[k-1]=arr[c-k];
    arr[c-k]=t;
        node *temp1=start;
     for(int i=0;i<c;i++)
    {
        temp1->info=arr[i];
        temp1=temp1->next;
    }

}
int main()
{
    beginsertion(5);
    beginsertion(4);
    beginsertion(3);
    beginsertion(2);
    beginsertion(1);
    display();
    cout<<endl;
    swaplist(start,2);
    display();
}
