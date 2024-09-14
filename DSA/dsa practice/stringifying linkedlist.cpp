#include<iostream>
using namespace std;
class Node
{
  public:
    int data;
    Node* next;

  Node(int data, Node* next = nullptr)
  {
    this->data = data;
    this->next = next;
  }
};
string stringify(Node *list)
{
    string str;
    Node* temp=list;
    while(temp!=nullptr)
    {
        str+=to_string(temp->data);
        str+=" -> ";
        temp=temp->next;
    }
    str+="nullptr";
    return str;
}
int main()
{
    Node* l3 = new Node(3);  // Create nodes first
    Node* l2 = new Node(2, l3);
    Node* list = new Node(1, l2);

    string str = stringify(list);
    cout << str << endl;
}
