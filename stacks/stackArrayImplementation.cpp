#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }

        else
        {
            cout << endl
                 << "Stack Overflow";
        }
    }

    void pop()
    {
    }

    int peek()
    {
    }

    bool isEmpty()
    {
    }
};

int main()
{

    return 0;
}