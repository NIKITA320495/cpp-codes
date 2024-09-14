#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
void insertAtEnd(ListNode* &start, int val) {
    ListNode* newNode = new ListNode(val);
    if (start == nullptr) {
        start = newNode;
    } else {
        ListNode* current = start;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int c=0;
        while(temp!=nullptr)
        {
            c++;
            temp=temp->next;
        }
         if (c == n) {
        ListNode* toDelete = head;
        head = head->next;
        delete toDelete;
        return head;
    }
    temp = head;
    for (int i = 0; i < c-n-1; i++) {
        temp = temp->next;
    }

    // Delete the nth node from the end
    ListNode* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

    return head;
    }
void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    ListNode*head=nullptr;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    ListNode *head2=removeNthFromEnd(head,2);
    printLinkedList(head2);
}
