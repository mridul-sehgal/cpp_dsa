#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    queue<int> newQ;

    int ans = q.size() / 2;
    while (q.size() > ans)
    {
        newQ.push(q.front());
        q.pop();
    }

    while (!newQ.empty())
    {
        int val1 = newQ.front();
        newQ.pop();
        q.push(val1); 
        int val2 = q.front();
        q.pop();
        q.push(val2);
    }

    while (!q.empty())
    {
        cout << " " << q.front();
        q.pop();
    }

    return 0;
}