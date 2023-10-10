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

    print(head);

    return 0;
}
