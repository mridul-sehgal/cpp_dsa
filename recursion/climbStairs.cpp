#include <iostream>
using namespace std;
int waysToClimbStairs(int n)
{
    if (n < 0)
    {
        return 0;
    }

    else if (n == 0)
    {
        return 1;
    }

    else
    {
        return (waysToClimbStairs(n - 2) + waysToClimbStairs(n - 1));
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = waysToClimbStairs(n);
    cout << ans;
    return 0;
}