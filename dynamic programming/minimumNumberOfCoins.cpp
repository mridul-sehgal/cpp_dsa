
// *************RECURSSIVE APPROACH *************

// #include <bits/stdc++.h>
//             int
//             solve(vector<int> &num, int x)
// {
//     if (x == 0)
//         return 0;
//     if (x < 0)
//         return INT_MAX;

//     int mini = INT_MAX;
//     for (int i = 0; i < num.size(); i++)
//     {
//         int ans = solve(num, x - num[i]);
//         if (ans != INT_MAX)
//             mini = min(mini, 1 + ans);
//     }

//     return mini;
// }
// int minimumElements(vector<int> &num, int x)
// {

//     int ans = solve(num, x);
//     if (ans == INT_MAX)
//     {
//         return -1;
//     }
//     return ans;
// }



// **************** TOP DOWN APPROACH *************

// #include <bits/stdc++.h>
// int solve(vector<int>&num, int x,vector<int>&dp)
// {
//     if(x==0)
//     return 0;
//     if(x<0)
//     return INT_MAX;

//     if(dp[x]!=-1)
//     {
//         return dp[x];
//     }

//     int mini=INT_MAX;
//     for(int i=0;i<num.size();i++)
//     {
//         int ans=solve(num,x-num[i],dp);
//         if(ans!=INT_MAX)
//         mini=min(mini,1+ans);
//     }
//     dp[x]=mini;
//     return dp[x];
// }
// int minimumElements(vector<int> &num, int x)
// {
//     vector<int>dp(x+1,-1);
//     int ans=solve(num,x,dp);
//     if (ans == INT_MAX) {
//         return -1;
//     }
//     return ans;
// }