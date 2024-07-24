
//************ RECURSSIVE APPROACH *************

// #include <bits/stdc++.h>
// #define MOD 1000000007

// // Utility functions

// int add(int a,int b)
// {
//     return (a%MOD + b%MOD)%MOD;
// }

// int mul(int a ,int b)
// {
//     return ( (a%MOD) * (b%MOD) )%MOD;
// }

// // utility functions end

// int solve(int n,int k)
// {
//     if(n==1)
//     return k;

//     if(n==2)
//     {
//         return add( mul ( k, k-1 )  , k );
//     }

//     int ans= add( mul ( solve( n-2 ,k ), k-1 ) , mul( solve( n-1, k ), k-1 )  );
//     return ans;
// }

// int numberOfWays(int n, int k) {
//     return solve(n,k);
// }



//***************** MEMOIZATION CODE ***************

// #include <bits/stdc++.h>
// #define MOD 1000000007

// // Utility functions

// int add(int a,int b)
// {
//     return (a%MOD + b%MOD)%MOD;
// }

// int mul(int a ,int b)
// {
//     return ( (a%MOD) * (b%MOD) )%MOD;
// }

// // utility functions end

// int solve(int n,int k,vector<int>&dp)
// {
//     if(n==1)
//     return k;

//     if(n==2)
//     {
//         return add( mul ( k, k-1 )  , k );
//     }

//     if(dp[n]!=-1)
//     {
//         return dp[n];
//     }

//     dp[n]= add( mul ( solve( n-2 ,k,dp ), k-1 ) , mul( solve( n-1, k,dp ), k-1 )  );
//     return dp[n];
// }

// int numberOfWays(int n, int k) {
//     vector<int>dp(n+1,-1);
//     return solve(n,k,dp);
// }




// ************ TABULATION APPROACH *************

// #include <bits/stdc++.h>
// #define MOD 1000000007

// // Utility functions

// int add(int a,int b)
// {
//     return (a%MOD + b%MOD)%MOD;
// }

// int mul(int a ,int b)
// {
//     return ( (a%MOD) * (b%MOD) )%MOD;
// }

// // utility functions end

// int solve(int n,int k)
// {
//     vector<int>dp(n+1,0);
//     dp[1]=k;
//     dp[2]=add( mul ( k, k-1 )  , k );

//     for(int i=3;i<=n;i++)
//     {
//        dp[i]= add( mul ( dp[i-2], k-1 ) , mul( dp[i-1], k-1 )  );
//     }

//     return dp[n];
// }

// int numberOfWays(int n, int k) {
//     return solve(n,k);
// }
