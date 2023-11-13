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

Node *kReverse(Node *head, int k)
{

    if(head==NULL)
    {
        return NULL;
    }

    Node *forward = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;

    while (curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward!=NULL)
    {
        head->next=kReverse(forward,k);
    }
    return prev;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertToHead(head, 11);
    insertToHead(head, 12);
    insertToHead(head, 13);
    print(head);

    Node*newHead=kReverse(head,2);
    print(newHead);

    return 0;
}