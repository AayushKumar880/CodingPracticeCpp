#include <iostream>
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

void insertAtHead(Node *&head, int val)
{ // insert a link at head
    Node *new_Node = new Node(val);
    new_Node->next = head;
    head = new_Node;
}

void insertAtEnd(Node *&head, int val)
{
    Node *new_Node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        // increase temp till end
    }
    temp->next = new_Node;
    // at the end put new_node in temp.next which is by default is NULL
}

void InsertAtPosition(Node *head, int val, int pos)
{

    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }

    Node *new_Node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos < pos - 1)
    {
        temp = temp->next;
        curr_pos++;
    }
    // temp is pointing to pos-1
    new_Node->next = temp->next;
    temp->next = new_Node;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void update(Node *head, int val, int k)
{
    Node *temp = head;
    int curr_pos = 0;

    while (curr_pos < k)
    {
        temp = temp->next;
        curr_pos++;
    }

    temp->val = val;
}

void deletionAtHaed(Node *&head)
{
    Node *temp = head;
    // temp = temp->next;
    // head = temp;
    head = head->next;
    free(temp); // free up space occupied
}

void deleteAtEnd(Node *&head)
{
    Node *temp;
    Node *second_last = head;
    while (second_last->next->next /*second last node*/ != NULL)
    {
        second_last = second_last->next;
    }
    temp = second_last->next; // put last in temp
    second_last->next = NULL;
    free(temp);
}

void deletionAtPos(Node *head, int pos)
{
    Node *prev = head;
    Node *temp;
    int curr_pos = 0;
    while (curr_pos < pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

int main()
{
    // Node *n = new Node(1);
    // cout << n->val << " " << n->next << endl;
    // return 0;
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtEnd(head, 2);

    display(head);
    insertAtHead(head, 3);
    insertAtEnd(head, 4);
    display(head);

    InsertAtPosition(head, 5, 2);
    display(head);

    update(head, 6, 1);
    display(head);

    deletionAtHaed(head);
    display(head);

    deleteAtEnd(head);
    display(head);

    deletionAtPos(head, 1);
    display(head);

    return 0;
}