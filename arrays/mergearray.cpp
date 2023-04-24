#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        int a1;
        cin >> a1;
        a.push_back(a1);
    }

    for (int i = 0; i < m; i++)
    {
        int b1;
        cin >> b1;
        b.push_back(b1);
    }

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }

        if (a[i] > b[j])
        {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < n)
    {
        c.push_back(a[i]);
        i++;
    }

    while (j < m)
    {
        c.push_back(b[j]);
        j++;
    }

    sort(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
    }

    return 0;
}
