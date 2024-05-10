// ******** Recurssion **********
/* long long solve(int dice, int faces, int target)
    {
        if(target<0)
            return 0;

        if(dice==0 && target!=0)
            return 0;

        if(dice!=0 && target==0)
            return 0;

        if(dice==0 && target ==0)
            return 1;

        long long ans=0;
        for(int i=1;i<=faces;i++)
        {
            ans=ans+solve(dice-1,faces,target-i);
        }
        return ans;
    }

    long long noOfWays(int M , int N , int X) {
        return solve (N,M,X);
    } */

// ******** Memoization **********
/* long long solve(int dice, int faces, int target,vector<vector<long long>>&dp)
    {
        if(target<0)
            return 0;

        if(dice==0 && target!=0)
            return 0;

        if(dice!=0 && target==0)
            return 0;

        if(dice==0 && target ==0)
            return 1;

        if(dp[dice][target]!=-1)
            return dp[dice][target];

        long long ans=0;
        for(int i=1;i<=faces;i++)
        {
            ans=ans+solve(dice-1,faces,target-i,dp);
        }
        return dp[dice][target]= ans;
    }

    long long noOfWays(int M , int N , int X) {
        vector<vector<long long>>dp(N+1,vector<long long>(X+1,-1));
        return solve (N,M,X,dp);
    } */

// ******** Tabulation **********

/* long long solve(int dice, int faces, int target)
    {
        vector<vector<long long>>dp(dice+1,vector<long long>(target+1,0));
        dp[0][0]=1;

        for(int d=1;d<=dice;d++)
        {
            for(int t=1;t<=target;t++)
            {
                long long ans=0;
                for(int i=1;i<=faces;i++)
                {
                    if(t-i >=0)
                    ans=ans+dp[d-1][t-i];
                }
                dp[d][t]= ans;
            }
        }
        return dp[dice][target];
    }

    long long noOfWays(int M , int N , int X) {

        return solve (N,M,X);
    } */


// ******** Space Optimization **********

/* long long solve(int dice, int faces, int target)
    {

        vector<long long>prev(target+1,0);
        vector<long long>curr(target+1,0);
        prev[0]=1;

        for(int d=1;d<=dice;d++)
        {
            for(int t=1;t<=target;t++)
            {
                long long ans=0;
                for(int i=1;i<=faces;i++)
                {
                    if(t-i >=0)
                    ans=ans+prev[t-i];
                }
                curr[t]= ans;
            }
            prev=curr;
        }
        return prev[target];
    }

    long long noOfWays(int M , int N , int X) {

        return solve (N,M,X);
    } */