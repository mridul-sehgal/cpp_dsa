#include <bits/stdc++.h>
using namespace std;

//*********top down approach***********

int fib(int n, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

//*********bottom up approach***********

int fib2(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1);

    //*********top down approach***********

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << "top down approach answer" << fib(n, dp) << endl;

    ////*********bottom up approach***********

    int ans = fib2(n);
    cout << "bottom up approach answer" << ans;


    //**********space optimised approach**********

    int prev1=1;
    int prev2=0;
    int curr;
    for(int i=2;i<=n;i++)
    {
        curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    cout<<prev1;
    cout<<curr;

    
    return 0;

}