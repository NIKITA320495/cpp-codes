#include <iostream>
#include <string>

using namespace std;

struct node {
    int info;
    node* next;
};

node* start = nullptr;

node* parse(string s) {
    node* temp = nullptr; // Temporarily store the last node
    node* originalStart = nullptr; // Keep track of the original start

    for (int i = 0; i < s.length(); i++) {
         if (isdigit(s[i]))  {
            node* newnode = new node;
            newnode->info = s[i]-'0' ; // Convert char to int
            newnode->next = nullptr;

            if (temp == nullptr) {
                start = newnode;
                temp = start;
                originalStart = start; // Set the original start only once
            } else {
                temp->next = newnode;
                temp = newnode;
            }
        }
    }
    return originalStart; // Return the original start pointer
}

void printList(node* nn) {
    while (nn != nullptr) {
        cout << nn->info << " ";
        nn = nn->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    node* nn = parse("1 -> 2 -> 3 -> nullptr");
    printList(nn);

    return 0;
}
