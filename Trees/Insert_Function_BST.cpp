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
    // If the tree is empty, create a new Node
    if (root == nullptr) {
        return new Node(value);
    }

    // Traverse the tree and insert the value in the correct position
    if (value < root->data) {
        // Insert into the left subtree
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        // Insert into the right subtree
        root->right = insert(root->right, value);
    }

    // Return the unchanged root pointer
    return root;
}

// Function to perform an inorder traversal (to verify the tree structure)
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

    return 0;
}
