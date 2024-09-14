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
ListNode *mergetwo(ListNode*list1,ListNode*list2)
{
    ListNode*head=nullptr;
    ListNode*prev=nullptr;
    if(!list1)
        return list2;
    if(!list2)
        return list1;
    if(list1->val<=list2->val)
    {
        head=list1;
        prev=list1;
        list1=list1->next;
    }
    else
    {
        head=list2;
        prev=list2;
        list2=list2->next;
    }
    while(list1 && list2)
    {
         if(list1->val<=list2->val)
    {
        prev->next=list1;
        prev=list1;
        list1=list1->next;
    }
    else
    {
        prev->next=list2;
        prev=list2;
        list2=list2->next;
    }
    }
    if(list1){
            prev->next=list1;
        }
        else{
            prev->next=list2;
        }
    return head;
}
ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=NULL;
        for(auto& list:lists){
            head=mergetwo(head,list);
        }
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
    ListNode*head2=nullptr;
    insertAtEnd(head2,1);
    insertAtEnd(head2,2);
    insertAtEnd(head2,3);
    insertAtEnd(head2,4);
    insertAtEnd(head2,5);
    ListNode*head3=nullptr;
    insertAtEnd(head3,1);
    insertAtEnd(head3,2);
    insertAtEnd(head3,3);
    insertAtEnd(head3,4);
    insertAtEnd(head3,5);
    vector<ListNode*> lists;
    lists.push_back(head);
    lists.push_back(head2);
    lists.push_back(head3);

    ListNode* fin = mergeKLists(lists);
    printLinkedList(fin);
 }
