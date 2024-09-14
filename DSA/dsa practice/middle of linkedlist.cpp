#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node *start=nullptr;
void create(int info)
{
 node *newnode=new node;
 newnode->info=info;
 newnode->next=start;
 start=newnode;
}
int countnode(node *start)
{
    int count=0;
    node*temp=start;
    while(temp!=nullptr)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
node*middlenode(node*start)
{
    int c=countnode(start);
    int mid=c/2;
    node*temp=start;
    node *midlist=new node;
    for(int i=0;temp!=nullptr;i++)
    {
        if(i==mid)
        { midlist->info=temp->info;
            break;}
        temp=temp->next;
    }
    midlist->next=temp->next;
    return midlist;
}
int main()
{
    create(5);
    create(4);
    create(3);
    create(2);
    create(1);
    node *middle=middlenode(start);
    cout<<middle->next->info;
}
