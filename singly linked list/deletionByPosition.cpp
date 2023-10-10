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

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
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

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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

    deleteNode(3, head);
    cout << endl;
    print(head);
    return 0;
}
