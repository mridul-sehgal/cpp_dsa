// we have to reverse the after a particular index
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int s = m;
    int e = n - 1;

    while (s <= e)
    {
        swap(v.at(s), v.at(e));
        s++;
        e--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i);
    }
    return 0;
}