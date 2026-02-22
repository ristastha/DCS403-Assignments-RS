#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

void printReverse(Node* head) {
    if(head == NULL)
        return;

    printReverse(head->next);
    cout << head->data << " ";
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printReverse(head);

    return 0;
}