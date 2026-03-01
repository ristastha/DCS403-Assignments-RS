#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* insertIterative(Node* root, int key) {
    Node* newNode = new Node(key);

    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* current = root;

    while (current != nullptr) {
        parent = current;

        if (key < current->data)
            current = current->left;
        else if (key > current->data)
            current = current->right;
        else {
            delete newNode;  // Duplicate
            return root;
        }
    }

    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = insertIterative(root, 50);
    insertIterative(root, 30);
    insertIterative(root, 70);

    inorder(root);
}