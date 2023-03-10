#include <iostream>
using namespace std;
/*
    - Maximum nodes at Level L = 2^L
    - Maximum nodes in a tree of Height H is 2^H - 1
    - For N nodes, minimum possible height or minimum number of levels are log2(N+1)
    - A binary tree with L Leaevs has at least log2(N+1)+1 number of levels
*/

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node *root)
{
    if(root == NULL){
        return;
    }
    //print the root
    cout << root->data << " ";
    //goto left subtree
    preorder(root->left);
    //goto right sub tree
    preorder(root->right);
}

void inorder(Node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // preorder(root);
    // inorder(root);
    postorder(root);
}