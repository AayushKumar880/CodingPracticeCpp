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
        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node *temp = head;
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
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void delete_duplicate(Node *&head)
{
    Node *curr_node = head;
    while (curr_node)
    {

        while (curr_node->next && curr_node->val == curr_node->next->val)
        {
            Node *temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        curr_node = curr_node->next;
    }
}

int main()
{
    int n;
    cout << "Enter the no of nodes: " << endl;
    cin >> n;
    cin.ignore();

    LinkedList l1;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        l1.insertAtEnd(value);
    }
    l1.display();
    delete_duplicate(l1.head);
    l1.display();
}