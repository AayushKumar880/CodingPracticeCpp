#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int curr_size;

public:
    Stack(int c)
    {
        capacity = c;
        curr_size = 0;
        head = NULL;
    }

    void push(int x)
    {
        if (curr_size == capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        Node *new_Node = new Node(x);
        new_Node->next = head;
        head = new_Node;
        curr_size++;
    }

    void pop()
    {
        if (curr_size == 0)
        {
            cout << "Underflow" << endl;
            return;
        }
        Node *new_head = head->next;
        head->next = NULL;
        delete head;
        head = new_head;
        curr_size--;
    }

    bool isEmpty()
    {
        return curr_size == 0;
    }

    bool isFull()
    {
        return curr_size == capacity;
    }
};