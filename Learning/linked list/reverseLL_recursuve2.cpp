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

Node*reverse(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node *reversedListHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return reversedListHead;


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

    Node* newHead=reverse(head);
    print(newHead);

    return 0;
}