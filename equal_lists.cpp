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

bool IsEqual(Node *head1, Node *head2)
{
    Node *list1 = head1;
    Node *list2 = head2;

    while (list1->next != NULL && list2->next != NULL)
    {
        if (list1->val == list2->val)
        {
            return false;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    return (list1->next == NULL && list2->next == NULL);
}

int main()
{
    LinkedList l1;
    LinkedList l2;

    int n, m;
    cout << "Enter the size of lists: " << endl;
    cin >> n >> m;

    cout << "Enter first list: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        l1.insertAtEnd(ele);
    }

    cout << "Enter second list: " << endl;
    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        l2.insertAtEnd(ele);
    }
    // l1.display();
    // l2.display();

    if (IsEqual(l1.head, l2.head))
    {
        cout << "Equal lists" << endl;
    }
    else
    {
        cout << "Unequal lists";
    }
}