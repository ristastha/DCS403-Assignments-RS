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

// Recursive Minimum
Node* findMinRecursive(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;
    return findMinRecursive(root->left);
}

// Recursive Maximum
Node* findMaxRecursive(Node* root) {
    if (root == nullptr || root->right == nullptr)
        return root;
    return findMaxRecursive(root->right);
}

// Iterative Minimum
Node* findMinIterative(Node* root) {
    while (root && root->left)
        root = root->left;
    return root;
}

// Iterative Maximum
Node* findMaxIterative(Node* root) {
    while (root && root->right)
        root = root->right;
    return root;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    cout << "Min: " << findMinIterative(root)->data << endl;
    cout << "Max: " << findMaxIterative(root)->data << endl;
}