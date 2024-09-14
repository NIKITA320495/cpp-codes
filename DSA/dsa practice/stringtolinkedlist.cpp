#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data, Node* next = nullptr) : data(data), next(next) {}
};

Node* parse(string s) {
    Node* head = nullptr;
    Node* current = nullptr;
    for (int i = 0; i < s.length() - 1; i++) {
        if (isdigit(s[i])) {
            Node* newNode = new Node(s[i]-'0'); // Convert char to int
            if (head == nullptr) {
                head = newNode;
                current = head;
            } else {
                current->next = newNode;
                current = newNode;
            }
        }
    }

    return head;
}

int main() {
    Node* nn = parse("nullptr");
    while (nn != nullptr) {
        cout << nn->data;
        nn = nn->next;
    }

    return 0;
}
