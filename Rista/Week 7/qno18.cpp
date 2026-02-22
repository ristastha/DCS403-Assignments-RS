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
    head->next->next = new Node(30);

    int X = 20, Y = 25;

    Node* temp = head;
    while(temp != NULL && temp->data != X)
        temp = temp->next;

    if(temp != NULL) {
        Node* newNode = new Node(Y);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}