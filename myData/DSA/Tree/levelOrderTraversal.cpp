#include <iostream>
#include <queue>
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

void printLevelOrder(Node *root)
{
    //Create a queue
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node *node = q.front();

        q.pop();
        if(node!=NULL){
            cout << node->data << " ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }

    }
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

    printLevelOrder(root);
}