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
 void printLinkedList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr || k == 0) {
        return head; // No rotation needed
    }

    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = head; // Make the list circular
    for (int i = 0; i <=k; i++) {
        temp = head; // Reset temp to head
       head=head->next; // Move head one step forward
    }

    temp->next = nullptr; // Break the circularity at the new tail

    return head;
}

 int main()
 {
    ListNode*head=nullptr;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    printLinkedList(head);
    ListNode *rotated=rotateRight(head,1);
    cout<<endl;
    printLinkedList(rotated);
 }
