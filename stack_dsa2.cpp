#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;
    Stack(int size) //Constructing stack
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element) //O(1)
    {
        if (size - top > 0)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() //O(1)
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack Underflow" << endl;
    }

    int peek() //O(1)
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() //O(1)
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s(5);
    s.push(5);
    s.push(89);
    s.push(14);
    s.push(19);
    s.push(80);
    s.push(9);
    s.push(4);



    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;

    if (s.isEmpty())
        cout << "Stack is empty." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}
