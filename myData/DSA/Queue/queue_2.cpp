// queue using LL
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    // enqueue
    void push(int x)
    {
        Node *n = new Node(x);

        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        // back->next = n;
        //back->next;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "No elements in queue" << endl;
            return;
        }

        Node *toDel = front;
        front = front->next;

        delete toDel;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }

        return front->data;
    }

    bool empty()
    {
        if(front == NULL){
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;

}