/* static bool comp(vector<int> &a, vector<int> &b)
{
    if (a[0] == b[0])
    {
        return a[1] > b[1];
    }

    else
    {
        return a[0] < b[0];
    }
}
int solve(vector<vector<int>> &a)
{
    sort(a.begin(), a.end(), comp);
    vector<int> ans;
    int n = a.size();

    if (n == 0)
    {
        return 0;
    }
    ans.push_back(a[0][1]);

    for (int i = 1; i < n; i++)
    {
        if (a[i][1] > ans.back())
        {
            ans.push_back(a[i][1]);
        }
        else
        {
            int index = lower_bound(ans.begin(), ans.end(), a[i][1]) - ans.begin();
            ans[index] = a[i][1];
        }
    }
    return ans.size();
}
int maxEnvelopes(vector<vector<int>> &envelopes)
{
    return solve(envelopes);
}
*/