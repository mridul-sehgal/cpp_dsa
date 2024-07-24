// ******** Recurssion **********

/*
    int solve(int start,int end,vector<int>& slices,int n)
    {
        if(n==0 || start>end)
        {
            return 0;
        }
        int take=slices[start]+solve(start+2,end,slices,n-1);
        int notTake=solve(start+1,end,slices,n);
        return max(take,notTake);
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        int case1=solve(0,k-2,slices,k/3);
        int case2=solve(1,k-1,slices,k/3);
        return max(case1,case2);
    }
*/

// ******** Memoization **********

/* int solve(int start,int end,vector<int>& slices,int n,vector<vector<int>>&dp)
    {
        if(n==0 || start>end)
        {
            return 0;
        }

        if(dp[start][n] !=-1)
        {
            return dp[start][n];
        }

        int take=slices[start]+solve(start+2,end,slices,n-1,dp);
        int notTake=solve(start+1,end,slices,n,dp);

        dp[start][n]=max(take,notTake);
        return dp[start][n];
    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        vector<vector<int>>dp1(k,vector<int>(k,-1));
        vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case1=solve(0,k-2,slices,k/3,dp1);
        int case2=solve(1,k-1,slices,k/3,dp2);
        return max(case1,case2);
    } */

// ******** Tabulation **********

/* int solve(vector<int>& slices,int k)
    {

        vector<vector<int>>dp1(k+2,vector<int>(k,0));
        vector<vector<int>>dp2(k+2,vector<int>(k,0));

        for(int start=k-2;start>=0;start--)
        {
            for(int n=1;n<=k/3;n++)
            {
                int take=slices[start]+dp1[start+2][n-1];
                int notTake=dp1[start+1][n];
                dp1[start][n]=max(take,notTake);
            }
        }
        int case1=dp1[0][k/3];

        for(int start=k-1;start>=1;start--)
        {
            for(int n=1;n<=k/3;n++)
            {
                int take=slices[start]+dp2[start+2][n-1];
                int notTake=dp2[start+1][n];
                dp2[start][n]=max(take,notTake);
            }
        }
        int case2=dp2[1][k/3];
        return max(case1,case2);

    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();

        return solve(slices,k);
    } */

// ******** Space Optimization **********

/* int solve(vector<int>& slices,int k)
    {
        vector<int>prev1(k+2,0);
        vector<int>curr1(k+2,0);
        vector<int>next1(k+2,0);
        vector<int>prev2(k+2,0);
        vector<int>curr2(k+2,0);
        vector<int>next2(k+2,0);

        for(int start=k-2;start>=0;start--)
        {
            for(int n=1;n<=k/3;n++)
            {
                int take=slices[start]+next1[n-1];
                int notTake=curr1[n];
                prev1[n]=max(take,notTake);
            }
            next1=curr1;
            curr1=prev1;
        }
        int case1=curr1[k/3];

        for(int start=k-1;start>=1;start--)
        {
            for(int n=1;n<=k/3;n++)
            {
                int take=slices[start]+next2[n-1];
                int notTake=curr2[n];
                prev2[n]=max(take,notTake);
            }
            next2=curr2;
            curr2=prev2;
        }
        int case2=curr2[k/3];
        return max(case1,case2);



    }
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();

        return solve(slices,k);
    } */
