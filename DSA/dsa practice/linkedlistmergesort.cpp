#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
    node(int x) : val(x), next(NULL) {}
};
node *merge(node* left, node* right) {
    node* dummy = new node(0);
    node* current = dummy;

    while (left && right) {
        if (left->val < right->val) {
            current->next = left;
            left = left->next;
        } else {
            current->next = right;
            right = right->next;
        }
        current = current->next;
    }
 current->next = left ? left : right; // Attach remaining nodes

    return dummy->next;
}

node *mergesort(node *head)
{
    if(head==nullptr)
        return head;
    node *slow=head;
    node*fast=head->next;
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    node*right=slow->next;
    slow->next=nullptr;
    node*leftsorted=mergesort(head);
    node*rightsorted=mergesort(right);
    return merge(leftsorted,rightsorted);
}
int main() {
    // Creating a sample linked list
    node *head = new node(3);
    head->next = new node(1);
    head->next->next = new node(4);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(5);

    // Sorting the linked list
    head = mergesort(head);

    // Printing the sorted linked list
    cout << "Sorted Linked List: ";
    node *temp = head;
    while (temp != nullptr) {
        cout << temp->val<< " ";
        temp = temp->next;
    }
    cout << endl;

    // Deallocating memory
    while (head != nullptr) {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
