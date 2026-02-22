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

    int X = 20;
    int position = 1;
    Node* temp = head;

    while(temp != NULL) {
        if(temp->data == X) {
            cout << "Found at position " << position;
            return 0;
        }
        temp = temp->next;
        position++;
    }

    cout << "Element not found";
    return 0;
}