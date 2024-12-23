#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void insertAtEnd(int value)
    {
        Node *new_node = new Node(value);
        Node *temp = head;
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            cout << temp->val << "->";
        }
        cout << "NULL" << endl;
    }
};

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }

    Node *new_node = prev;
    return new_node;
}

Node *reverseNodes(Node *head, int k)
{

    Node *prev = NULL;
    Node *curr = head;

    int count = 0;
    while (curr != NULL && count < k)
    {
        Node *nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        count++;
    }
    if (curr != NULL)
    {
        Node *new_node = reverseNodes(curr, k);
        head->next = new_node;
    }

    return prev;
}

int main()
{
    LinkedList l1;
    for (int i = 0; i < 6; i++)
    {
        int ele;
        cin >> ele;
        l1.insertAtEnd(ele);
    }
    l1.display();
    l1.head = reverseNodes(l1.head, 2);
    l1.display();

    return 0;
}