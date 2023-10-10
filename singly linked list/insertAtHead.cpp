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

// inserting a new node in the linkd list at the previous position of existing node
void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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

    insertAtHead(8, head);
    insertAtHead(6, head);

    print(head);

    return 0;
}
