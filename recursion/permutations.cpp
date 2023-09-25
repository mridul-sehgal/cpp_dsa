#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int>nums,int index,vector<vector<int>>&ans){

if(index>=nums.size())
{
    ans.push_back(nums);
    return; 
}

for(int i=index;i<nums.size();i++)
{
    swap(nums[index],nums[i]);
    permutations(nums,index+1,ans);
    swap(nums[index],nums[i]);//backtracking
}

}

int main()
{
    
    int index=0;
    vector<int>nums={1,2,3};
    vector<int>output;
    vector<vector<int>>ans;
    permutations(nums,index,ans);

    for(auto vec:ans)
    {
        for(auto it : vec)
        {
            cout<<it<<" ";
        }

        cout<<endl;
    }

    return 0;
}    