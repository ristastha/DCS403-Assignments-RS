#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Recursive Search Function
Node* searchRecursive(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return searchRecursive(root->left, key);
    else
        return searchRecursive(root->right, key);
}

int main() {
    Node* root = nullptr;

    // Manually build BST
    root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->left->left = new Node(20);
    root->left->right = new Node(40);

    int key = 40;

    Node* result = searchRecursive(root, key);

    if (result)
        cout << "Key found\n";
    else
        cout << "Key not found\n";

    return 0;
}