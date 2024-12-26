#include <iostream>
using namespace std;

// Define the structure of a Node in the BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a value into the BST
Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to search for a value in the BST
bool search(Node* root, int value) {
    if (root == nullptr) {
        return false; // Value not found
    }
    if (root->data == value) {
        return true; // Value found
    }
    if (value < root->data) {
        return search(root->left, value); // Search in the left subtree
    } else {
        return search(root->right, value); // Search in the right subtree
    }
}

// Function to perform an inorder traversal
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Insert values into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    // Display the inorder traversal of the BST
    cout << "Inorder Traversal of BST: ";
    inorderTraversal(root);
    cout << endl;

    // Search for some values
    int key = 40;
    if (search(root, key)) {
        cout << "Value " << key << " found in the BST." << endl;
    } else {
        cout << "Value " << key << " not found in the BST." << endl;
    }

    key = 25;
    if (search(root, key)) {
        cout << "Value " << key << " found in the BST." << endl;
    } else {
        cout << "Value " << key << " not found in the BST." << endl;
    }

    return 0;
}
