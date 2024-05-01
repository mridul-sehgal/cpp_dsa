// ******** Recurssion **********

/* int solve(int n , int a[] , int curr ,int prev)
    {
        if(curr==n)
        {
            return 0;
        }

        int include=0;
        if(prev==-1 || a[curr]>a[prev])
        {
            include=1+solve(n,a,curr+1,curr);
        }
        int exclude=0+solve(n,a,curr+1,prev);

        return max(include,exclude);

    }
    int longestSubsequence(int n, int a[])
    {
        return solve(n,a,0,-1);
    } */

// ******** Memoization **********\

/* int solve(int n , int a[] , int curr ,int prev,vector<vector<int>>&dp)
    {
        if(curr==n)
        {
            return 0;
        }

        if(dp[curr][prev+1]!=-1)
        {
            return dp[curr][prev+1];
        }

        int include=0;
        if(prev==-1 || a[curr]>a[prev])
        {
            include=1+solve(n,a,curr+1,curr,dp);
        }
        int exclude=0+solve(n,a,curr+1,prev,dp);

        return dp[curr][prev+1]=max(include,exclude);
    }
    int longestSubsequence(int n, int a[])
    {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n,a,0,-1,dp);
    } */

// ******** Tabulation **********

/* int solve(int n, int a[])
    {
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));

        for(int current = n-1; current >=0; current --)
        {
            for(int prev = current -1; prev >= -1; prev--)
            {

                int take = 0;
                if(prev == -1 || a[current] > a[prev])
                {
                    take = 1 + dp[current + 1][current+1];
                }

                int notTake = 0 + dp[current +1][prev+1];

                int ans = max(take, notTake);
                dp[current][prev+1] = ans;
            }
        }
        return dp[0][0];
    }

    int longestSubsequence(int n, int a[])
    {
        return solve(n,a);
    }*/

// ******** Space Optimization **********

/* int solve(int n, int a[])
    {
        vector<int>curr(n+1, 0);
        vector<int>next(n+1, 0);
        
        for(int current = n-1; current >=0; current --)
        {
            for(int prev = current -1; prev >= -1; prev--)
            {
                
                int take = 0;
                if(prev == -1 || a[current] > a[prev])
                {
                    take = 1 + next[current+1];
                }
        
                int notTake = 0 + next[prev+1];
        
                int ans = max(take, notTake);
                curr[prev+1] = ans;
            }
            
            next=curr;
        }

    return next[0];
    }
    int longestSubsequence(int n, int a[])
    {
        
        return solve(n,a);
    } */

// ******** DP with Binary Search **********

/* int solve(int n, int a[])
    {
        if(n==0)
        {
            return 0;
        }
        
        vector<int>ans;
        ans.push_back(a[0]);
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>ans.back())
            {
                ans.push_back(a[i]);
            }
            else
            {
                int index= lower_bound(ans.begin(), ans.end(),a[i])-ans.begin();
                ans[index]=a[i];
            }
        }

    return ans.size();
    }
    int longestSubsequence(int n, int a[])
    {
        
        return solve(n,a);
    } */