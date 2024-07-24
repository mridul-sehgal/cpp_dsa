#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

private:
};
// class end

// inserting a new node in the linkd list at the next position of existing node
void insertion(int data, int element, Node *&tail)
{
    // when the linked list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

bool isCircularOrNot(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return false;
    }

    return true;
}

int main()
{
    Node *tail = NULL;
    insertion(3, 5, tail);
    insertion(5, 3, tail);
    insertion(7, 5, tail);
    insertion(9, 7, tail);

    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtHead(8, head);
    insertAtHead(6, head);
    insertAtHead(4, head);
    insertAtHead(2, head);
    cout << isCircularOrNot(tail);
    return 0;
}
