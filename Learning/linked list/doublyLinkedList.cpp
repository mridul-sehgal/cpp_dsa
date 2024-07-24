#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

// traversing
void print(Node *head)
{
    cout << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// gives length of linked list
int getLength(Node *head)
{
    int length = 0;
    while (head != NULL)
    {
        length++;
        head = head->next;
    }
    return length;
}

// insertion at head
void insertAtHead(int data, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
// insertion at tail
void insertAtTail(int data, Node *&tail, Node *&head)
{
    if (tail == NULL)

    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }

    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(int posi, int data, Node *&head, Node *&tail)
{

    if (posi == 1)
    {
        insertAtHead(data, head, tail);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < posi - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insertAtTail(data, tail, head);
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        free(temp);
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        free(curr);
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(11, head, tail);
    insertAtTail(12, tail, head);
    insertAtPosition(2, 100, head, tail);
    deleteNode(2, head);
    print(head);
    cout << endl;
    cout << getLength(head);

    return 0;
}