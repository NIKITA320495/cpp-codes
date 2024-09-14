#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
};
ListNode *start=nullptr;
void beginsertion(int info)
{
    ListNode *newnode=new ListNode;
    newnode->val=info;
    newnode->next=start;
    start=newnode;
}
void display()
{
    ListNode *temp=start;
    while(temp!=nullptr)
    {
        cout<<temp->val;
        temp=temp->next;
    }
}
int countnode(ListNode *start)
{
    int count=0;
    ListNode *temp=start;
    while(temp!=nullptr)
    {
        count=count+1;
        temp=temp->next;
    }
    return count;
}
int maxsum()
{
   int c=countnode(start);
   int arr[c];
   ListNode*temp=start;
   for(int i=0;i<c;i++)
   {
       arr[i]=temp->val;
       temp=temp->next;
   }
   int sumarr[c/2];
   for(int i=0;i<c/2;i++)
   {
       sumarr[i]=arr[i]+arr[c-i-1];
   }

    int maxElement = sumarr[0]; // Assume the first element is the maximum

    for (int i = 1; i <c/2; ++i) {
        if (sumarr[i] > maxElement) {
            maxElement = sumarr[i];
        }
    }

    return maxElement;
}
int main()
{
    beginsertion(1);
    beginsertion(1000);
    //beginsertion(3);
    //beginsertion(4);
    int m=maxsum();
    cout<<m;
}

