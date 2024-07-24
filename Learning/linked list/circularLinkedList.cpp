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
        this->next = this;
    }

private:
};
// class end

// inserting a new node in the linkd list at the next position of existing node
void insertion(int data, int element, Node *&tail)
{
    // when the linked list is empty
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *newNode = new Node(data);
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deletion(int element, Node *&tail)
{
    if (tail == NULL)
    {
        cout << "Empty list";
        return;
    }

    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if (curr == prev) //single node in list
        {
            tail = NULL;
        }

        if (tail == curr) //2 or more nodes.. in case tail points to curr and curr is about to be deleted 

        {
            tail = prev;
        }
        curr->next = NULL;
        free(curr);
    }
}

int main()
{
    Node *tail = NULL;
    insertion(3, 5, tail);
    print(tail);
    insertion(5, 3, tail);
    print(tail);
    deletion(3, tail);
    print(tail);

    return 0;
}
