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

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);

    int value = 30;
    Node* newNode = new Node(value);

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}