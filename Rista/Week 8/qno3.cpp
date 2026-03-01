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

Node* insertRecursive(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->data)
        root->left = insertRecursive(root->left, key);
    else if (key > root->data)
        root->right = insertRecursive(root->right, key);
    // Ignore duplicates

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

    root = insertRecursive(root, 50);
    insertRecursive(root, 30);
    insertRecursive(root, 70);

    inorder(root);
}