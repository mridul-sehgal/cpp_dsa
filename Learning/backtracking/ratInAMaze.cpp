#include <bits/stdc++.h>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> m, vector<vector<int>> v, int n)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && v[x][y] == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void solve(vector<vector<int>> m, int n, int x, int y, vector<vector<int>> v, vector<string> &a, string p)
{
    if (x == n - 1 && y == n - 1)
    {
        a.push_back(p);
        return;
    }

    v[x][y] = 1;

    int newx = x - 1;
    int newy = y;
    if (isSafe(newx, newy, m, v, n))
    {
        p.push_back('U');
        solve(m, n, newx, newy, v, a, p);
        //p.pop_back();
    }

    newx = x + 1;
    newy = y;
    if (isSafe(newx, newy, m, v, n))
    {
        p.push_back('D');
        solve(m, n, newx, newy, v, a, p);
        //p.pop_back();
    }

    newx = x;
    newy = y - 1;
    if (isSafe(newx, newy, m, v, n))
    {
        p.push_back('L');
        solve(m, n, newx, newy, v, a, p);
        //p.pop_back();
    }

    newx = x;
    newy = y + 1;
    if (isSafe(newx, newy, m, v, n))
    {
        p.push_back('R');
        solve(m, n, newx, newy, v, a, p);
        //p.pop_back();
    }

    v[x][y] = 0;
}

int main()
{
    int n = 4;
    // creating the m
    vector<vector<int>> m;
    vector<int> m1 = {1, 0, 0, 0};
    vector<int> m2 = {1, 1, 0, 1};
    vector<int> m3 = {1, 1, 0, 0};
    vector<int> m4 = {0, 1, 1, 1};
    m.push_back(m1);
    m.push_back(m2);
    m.push_back(m3);
    m.push_back(m4);
    // end of m

    vector<string> a;
    int x = 0;
    int y = 0;

    vector< vector<int> > v = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i][j] = 0;
        }
    }

    string p = "";

    if (m[0][0] == 0)
    {
        cout << "Cannot enter the maze";
    }

    solve(m, n, x, y, v, a, p);
    sort(a.begin(), a.end());

    for(auto it:a)
    {
        cout<<it<<" ";
    }

    return 0;
}