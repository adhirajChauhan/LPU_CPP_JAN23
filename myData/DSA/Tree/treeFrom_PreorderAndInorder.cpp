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

/*
 - Pick element from preorder and create a node
 - Increment the preorder's index
 - Search for picked element's position in inorder
 - Call to build left subtree from inorder's 0 to pos-1
 - Call to build right subtree from inorder pos+1 to n
 - Return the node
*/

int search(int inorder[], int start, int end, int curr)
{
    for(int i = 0; i <= end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node *node = new Node(curr);

    if(start == end) return node;
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);
}

void printInorder(Node *root){
    if(root == NULL){
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildTree(preorder, inorder,0,4);
    printInorder(root);
}



/*
 - Start from the end of postorder and pich element to create a node
 - Decrement postorder idx
 -Search for picked element's position in inorder
 - Call to build right subtree from inorder's pos+1 to n
 - Call to build left subtree from inorder 0 to pos-1
 - Return the node

 postorder - {4,2,5,3,1}   inorder - {4,2,1,5,3}
*/