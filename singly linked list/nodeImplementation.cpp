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

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data;
    cout << node1->next;

    return 0;
}
