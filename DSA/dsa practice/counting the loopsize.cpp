#include<iostream>
using namespace std;
struct Node
{
    int info;
    Node *next;
    void setNext(Node* nextNode) {
        next = nextNode;
    }
};
int getLoopSize(Node *startnode)
{
    Node *slow=startnode;
    Node *fast=startnode;
    int count=0;
    while(fast!=nullptr && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            Node* temp = slow;
            do {
                count++;
                temp = temp->next;
            } while (temp != slow);

            break;
        }
    }
    return count;
}
int main()
{
    Node n1, n2, n3, n4;

      	n1.setNext(&n2);
      	n2.setNext(&n3);
      	n3.setNext(&n4);
      	n4.setNext(&n2);

        int actual = getLoopSize(&n1);
        cout<<actual;
}
