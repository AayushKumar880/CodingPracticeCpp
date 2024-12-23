#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        this->top++;
        arr[this->top] = data;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        this->top--;
    }

    int getTop()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        return this->top == -1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
};