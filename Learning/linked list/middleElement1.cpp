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

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertToHead(head, 11);
    insertToHead(head, 12);
    insertToHead(head, 13);
    print(head);

    int length = getLength(head);
    int ans = length / 2;
    Node *temp = head;
    while (ans--)
    {
        temp = temp->next;
    }

    cout << temp->data;

    return 0;
}