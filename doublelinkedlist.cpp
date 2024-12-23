#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoubleLinkedlist
{
public:
    Node *head;
    Node *tail;

    DoubleLinkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    void InsertAtHead(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << "->NULL" << endl;
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(tail==NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void insertAtK(int value){
        
    }
};

int main()
{
    Node *newNode = new Node(3);

    DoubleLinkedlist dl1;
    dl1.head = newNode;
    dl1.tail = newNode;

    cout << dl1.head->val << endl;
    dl1.InsertAtHead(1);
    dl1.InsertAtHead(2);
    dl1.InsertAtHead(3);
    dl1.InsertAtHead(4);
    dl1.display();
}