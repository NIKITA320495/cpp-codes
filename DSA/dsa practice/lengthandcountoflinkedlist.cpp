#include<iostream>
using namespace std;
struct Node {
  Node * next;
  int data;
};
int length(Node *head)
{
    int l=0;
    Node *temp=new Node();
    while(temp!=nullptr)
    {
        temp=temp->next;
        l++;
    }
    return l;
}
int count(Node *head,int num)
{
    Node *temp=head;
    int count=0;
    while(temp!=nullptr)
    {
        if(temp->data==num)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;
}
int main()
{

        Node *head = new Node;
        Node *n = head;
        for(int i = 0; i < 10; ++i)
        {
          n->data=i;
          n = n->next;
          n=new Node();
        }
        int l=length(n);
        cout<<l;
        cout<<endl;
        int c=count(n,2);
        cout<<c;
}
