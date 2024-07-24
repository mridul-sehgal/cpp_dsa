

// ************** RECURSSIVE APPROACH *************

// #include <bits/stdc++.h>

// int solve(vector<int>&nums,int i)
// {
//     if(i<0)
//     {
//         return 0;
//     }

//     if(i==0)
//     {
//         return nums[0];
//     }

//     int include=solve(nums,i-2) + nums[i];
//     int exclude=solve(nums,i-1)+0;

//     return max(include,exclude);
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     int n=nums.size();
//     int ans=solve(nums,n-1);
//     return ans;
// }


// ************ TOP DOWN APPROACH ************


// #include <bits/stdc++.h>
// int solve(vector<int> &nums, int i, vector<int> &dp)
// {
//     if (i < 0)
//     {
//         return 0;
//     }

//     if (i == 0)
//     {
//         return nums[0];
//     }

//     if (dp[i] != -1)
//     {
//         return dp[i];
//     }

//     int include = solve(nums, i - 2, dp) + nums[i];
//     int exclude = solve(nums, i - 1, dp) + 0;

//     dp[i] = max(include, exclude);
//     return dp[i];
// }

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n, -1);
//     int ans = solve(nums, n, dp);
//     return ans;
// }


// ****************BOTTOM UP APPROACH *****************

// #include <bits/stdc++.h>

// int solve(vector<int> &nums, int n)
// {
//     vector<int> dp(n, -1);
//     dp[0] = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         int include = nums[i];
//         if (i > 1)
//         {
//             include += dp[i - 2];
//         }
//         int exclude = dp[i - 1];
//         dp[i] = max(include, exclude);
//     }
//     return dp[n - 1];
// }

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     int ans = solve(nums, n);
//     return ans;
// }

// ************ SPACE OPTIMISATION **********

// #include <bits/stdc++.h>

// int solve(vector<int>&nums,int n)
// {
//    int prev1=nums[0];
//    int prev2=0;

//     for(int i=1;i<n;i++ )
//     {
//         int include=nums[i]+prev2;
//         int exclude=prev1;
//         int ans=max(include,exclude);
//         prev2=prev1;
//         prev1=ans;
//     }
//     return prev1;

// }

// int maximumNonAdjacentSum(vector<int> &nums){
//     int n=nums.size();
//     int ans=solve(nums,n);
//     return ans;
// }