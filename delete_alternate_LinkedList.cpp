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
        Node *new_Node = new Node(value);

        if (head == NULL)
        {
            head = new_Node;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            // increase temp till end
        }
        temp->next = new_Node;
        // at the end put new_node in temp.next which is by default is NULL
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void remove_alternate(Node *head)
{
    
    Node *curr = head;
    while (curr->next != NULL && curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        curr = curr->next;
    }
}

int main()
{
    int n;
    cout << "Enter no of nodes: " << endl;
    cin >> n;
    cin.ignore();

    LinkedList l1;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        l1.insertAtEnd(val);
    }
    l1.display();

    remove_alternate(l1.head);
    l1.display();
    return 0;
}