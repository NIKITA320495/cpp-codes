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
ListNode *convertvectortoll(vector<int>list)
{
    ListNode *head=nullptr;
    ListNode *prev=nullptr;
    for(int num:list)
    {
        ListNode *newnode=new ListNode(num);
        if(!head)
        {
            head=newnode;
        }
        else
        {
            prev->next=newnode;
        }
        prev=newnode;
    }
    return head;
}
vector<int>convertlltovec(ListNode*head)
{
    vector<int>ans;
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        ans.push_back(temp->val);
        temp=temp->next;
    }
    return ans;
}
ListNode* reverseKGroup(ListNode* head, int k)
{
    vector<int>vec=convertlltovec(head);
    for(int i=0;i<vec.size();i=i+k)
    {
        if(i+k<=vec.size())
        reverse(vec.begin()+i, vec.begin()+i+k);
        else
            break;
    }
    ListNode*head1=convertvectortoll(vec);
    return head1;
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
    vector<int>l={1,2,3,4,5,6,7,8};
    ListNode *head=convertvectortoll(l);
    ListNode *head1=reverseKGroup(head,3);
    printLinkedList(head1);
}

