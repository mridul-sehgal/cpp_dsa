#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abbac";
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(ans=="")
        {
            ans.push_back(s[i]);
        }

        else if(ans.back()==s[i])
        {
            ans.pop_back();
        }

        else{
            ans.push_back(s[i]);
        }

    }
cout<<ans;
    
}