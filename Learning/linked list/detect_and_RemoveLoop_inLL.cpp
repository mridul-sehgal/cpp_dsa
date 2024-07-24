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

// printing the linked list
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

//************** SUBPART 1 : DETECT CYCLE IN LINLKED LIST***************

// approach1
bool detectLOOP(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *temp = head;
    map<Node *, bool> visited;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
// approach2:Floyd's algorithm

Node *floydDetection(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}

//************** SUBPART 2 : STARTIN ELEMENT IF THE LOOP IN LL ***************

Node *intersection(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersection_ = floydDetection(head);
    Node*slow=head;

    while(slow!=intersection_)
    {
        slow=slow->next;
        intersection_=intersection_->next;
    }

    return slow;
}

//************** SUBPART 3 : DELETION LOOP IN LL ***************
void deletionLoop(Node *head)
{
    if(head==NULL)
    {
        return;
    }

    Node* starting = intersection(head);
    Node*temp=starting;

    while(temp->next!=starting)
    {
        temp=temp->next;
    }

    temp->next=NULL;
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
    insertAtTail(12, tail);
    insertAtTail(14, tail);
    tail->next = head->next;

    // cout << detectLOOP(head) << endl;

    // floydDetection(head);
    
    Node*startingNode=intersection(head);
    cout<<startingNode->data<<endl;
    deletionLoop(head);
    print(head);
    

    return 0;
}
