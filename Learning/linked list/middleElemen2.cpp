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

void middle(Node* head)
{
    Node*fast=head->next;
    Node*slow=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }

        slow=slow->next;
    }
cout<<slow->data;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertToHead(head, 11);
    insertToHead(head, 12);
    insertToHead(head, 13);
    print(head);

    middle(head);

    return 0;
}