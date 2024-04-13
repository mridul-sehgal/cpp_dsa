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

// inserting a new node in the linkd list at the previous position of existing node
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

void deleteByValue(int value,Node*&head)
{
    if(head->data==value)
    {
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node* curr=head;
        Node* prev=NULL;
        while(curr->next!=NULL && curr->data!=value)
        {
            prev = curr;
            curr = curr->next;
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
    insertAtHead(8, head);
    insertAtHead(6, head);
    cout << "Insertion at head"<<endl;
    print(head);
    cout << endl;

    insertAtTail(12, tail);
    insertAtTail(14, tail);
    cout << "Insertion at tail" << endl;
    print(head);

    insertAtPosition(2, 27, head, tail);
    cout<<endl << "Insertion at position"<<endl;
    print(head);

    deleteNode(3, head);
    cout << endl<< "Deletion"<<endl;
    print(head);

    deleteByValue(14,head);
    cout << endl<< "Deletion"<<endl;
    print(head);

    return 0;
}
