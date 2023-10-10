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
void insertAtTail(int data, Node *&tail)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// // inserting a new node in the linkd list at the given position
void insertAtPosition(int posi, int data, Node *&head, Node *&tail)
{

    if (posi == 1)
    {
        insertAtHead(data, head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < posi - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insertAtTail(data, tail);
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// printing the linked list
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data;
    // cout << node1->next;

    Node *head = node1;
    Node *tail = node1;

    insertAtTail(12, tail);
    insertAtTail(14, tail);

    insertAtPosition(2, 27, head, tail);
    print(head);
    return 0;
}
