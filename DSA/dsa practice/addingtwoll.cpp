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
int reversell(ListNode* start) {
    vector<int> a;
    int num=0;
    ListNode* temp = start;
    while (temp != nullptr) {
        a.push_back(temp->val);
        temp = temp->next;
    }
    int n=a.size();
    reverse(a.begin(), a.end()); // Reverse the vector in place
    for(int i=0;i<a.size();i++)
    {
        num+=a[i]*pow(10,n-i-1);
    }
    return num;
}
ListNode* reverseNumberToLinkedList(int reversedNumber) {
    if (reversedNumber == 0)
        return new ListNode(0); // Return a new ListNode with value 0

    ListNode* head = nullptr;
    ListNode* current = nullptr;

    while (reversedNumber > 0) {
        int digit = reversedNumber % 10;
        reversedNumber /= 10;

        if (digit != 0 || head != nullptr) { // Skip leading zeros
            ListNode* newNode = new ListNode(digit);
            if (head == nullptr) {
                head = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = newNode;
            }
        }
    }

    return head;
}



ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    int r1=reversell(l1);
    int r2=reversell(l2);
    ListNode*sum=reverseNumberToLinkedList(r1+r2);
    return sum;
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
    ListNode* head1 = nullptr; // Initialize head pointer to nullptr
    // Insert values into the linked list
    insertAtEnd(head1, 0);
    ListNode* head2 = nullptr; // Initialize head pointer to nullptr
    // Insert values into the linked list
    insertAtEnd(head2, 0);
    ListNode*fin=addTwoNumbers(head1,head2);
    printLinkedList(fin);
}
