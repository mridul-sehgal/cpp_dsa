#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;

    while (x != y)
    {
        if (x > y)
        {
            x -= y;
        }

        else
        {
            y -= x;
        }
    }

    return x;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = gcd(x, y);
    cout << ans;
    return 0;
}