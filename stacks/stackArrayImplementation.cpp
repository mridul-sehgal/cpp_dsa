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
        if (top >= 0)
        {
            top--;
        }

        else
        {
            cout << endl
                 << "Stack underflow";
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return (arr[top]);
        }

        else
        {
            cout << "The stack is empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.peek()<<endl;

    st.pop();
    cout << st.peek()<<endl;

    st.pop();
    cout << st.peek()<<endl;

    st.pop();
    cout << st.peek()<<endl;

    st.pop();
    cout << st.peek()<<endl;

    if(st.isEmpty())
    {
        cout<<"Khali hoon bhai";
    }

    else{
        cout<<"Mere me abhi data hai";
    }


    return 0;
}