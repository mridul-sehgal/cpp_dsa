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
};

void insertToHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    print(prev);
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertToHead(head, 11);
    insertToHead(head, 12);
    insertToHead(head, 13);
    print(head);

    Node *curr = head;
    Node *prev = NULL;

    reverse(head, curr, prev);

    return 0;
}