#include <bits/stdc++.h>
using namespace std;

void powerSet(vector<int>nums,int index,vector<int>output,vector<vector<int>>&ans)
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    
    //exclude part
    powerSet(nums,index+1,output,ans);


    //include part
    int element=nums[index];
    output.push_back(element);
    powerSet(nums,index+1,output,ans);


}

int main()
{
    vector<int>nums={1,2,3};
    vector<int>output;
    int index=0;
    vector<vector<int>>ans;
    powerSet(nums,index,output,ans);

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