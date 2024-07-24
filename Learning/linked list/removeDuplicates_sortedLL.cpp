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

void insertAtHead(int data, Node *&head)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void deleteDuplicate(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node*forward=curr->next;
            free(forward);
            curr->next = next_next;
        }

        else
        {
            curr = curr->next;
        }
    }
}

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
    Node *head = node1;

    insertAtHead(8, head);
    insertAtHead(8, head);
    insertAtHead(6, head);
    insertAtHead(5, head);
    insertAtHead(5, head);
    insertAtHead(4, head);
    insertAtHead(2, head);
    insertAtHead(1, head);

    print(head);
    cout << endl;
    deleteDuplicate(head);
    print(head);

    return 0;
}
