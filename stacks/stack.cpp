#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation
    stack<int> s;

    // pushing data into the stack
    s.push(2);
    s.push(3);

    // popping data from stack

    s.pop();

    // peeking into stack

    cout << s.top()<<endl;

    // checking if stack is empty

    if (s.empty())
    {
        cout << "Empty stack";
    }

    else
    {
        cout << "Non empty stack\n";
    }

    //stack size

    cout<<"Stack size"<<s.size();

    return 0;
}