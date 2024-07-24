#include <bits/stdc++.h>
using namespace std;

int XpowerY(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }

    else if (y == 1)
    {
        return x;
    }

    if (y % 2 == 1)
    {
        return (x * XpowerY(x, y / 2) * XpowerY(x, y / 2));
    }

    else
    {
        return XpowerY(x, y / 2) * XpowerY(x, y / 2);
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = XpowerY(x, y);
    cout << ans;

    return 0;
}