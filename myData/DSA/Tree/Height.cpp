#include <iostream>
using namespace std;

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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    return max(lHeight, rHeight) + 1;
}

int countNodes(Node *root)
{
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}

int sumNodes(Node *root){
    if(root == NULL){
        return 0;
    }

    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}


int main()
{
    Node *root = new Node(7);
    root->left = new Node(3);
    root->right = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->left = new Node(1);
    root->right->right = new Node(6);

    //TO DO, print the number of nodes in above Binary tree
    //Left Subtree count + Right Subtree Count + 1


    //TO Do, print the sum of values of above tree

    // cout << calcHeight(root) << endl;
    // cout << countNodes(root) << endl;

    cout << sumNodes(root) << endl;
    
}