#include <iostream>
#include <stack>
using namespace std;
/*
we will take two stacks [stack1 and stack2]
enqueue -> push(x) stack 1
dequeue ->
    - If both the stack are empty, cout the error
    - if stack2 is empty
        - while stack1 is not empty, push everything from stack1 to stack2
    -Pop the elements from stack2
*/

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if(s1.empty() && s2.empty()){
            cout << "Queue is empty" << endl;
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){

                s2.push(s1.top());
                s1.pop();
            }
        }

        int topValue = s2.top();
        s2.pop();

        return topValue;
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;


}