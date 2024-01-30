#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    q.push(17);
    q.push(35);
    q.push(25);

    cout << q.front();
    cout << endl
         << q.size();
    q.pop();
    cout << endl
         << q.size();

    if (q.empty())
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }

    return 0;
}