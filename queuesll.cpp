#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

class Queues
{
public:
    int size;
    Node *head;
    Node *tail;

    Queues()
    {
        head = NULL;
        tail = NULL;
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        this->size++;
    }

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "empty\n";
            return;
        }
        else
        {
            Node *oldhead = head;
            Node *newHead = head->next;
            head = newHead;
            if (head == NULL)
                tail = NULL;
            oldhead->next = NULL;
            delete oldhead;
        }
        this->size--;
    }

    int getsize()
    {
        return this->size;
    }

    bool isEmpty()
    {
        return this->head == NULL;
    }

    int front()
    {
        if (this->head == NULL)
            return -1;
        return this->head->val;
    }
};

int main()
{
    Queues q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(13);
    while (!q.isEmpty())
    {
        cout << q.front() << endl;
        cout << q.getsize() << endl;
        q.dequeue();
    }
}