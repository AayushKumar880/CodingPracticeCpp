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
        Node *temp = head;
        Node *new_node = new Node(value);

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
        cout << "NULL";
    }
};

int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp->next != NULL){
        temp = temp->next;
        length++;
    }

    return length;
}

Node* moveByk(Node* ptr , int k){
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}

Node *getIntersectionNode(Node *headA, Node *headB)
{
    Node *ptr1 = headA;
    Node *ptr2 = headB;

    int l1 = getLength(headA);
    int l2 = getLength(headB);

    if(l1 > l2){
        int k = l1 - l2;
        moveByk(ptr1,k);
    }

    while (ptr1)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}