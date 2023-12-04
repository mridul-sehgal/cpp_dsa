#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str="mridul";
    stack<char>st;

    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        st.push(ch);
    }

    string ans="";

    for(int i=0;i<str.length();i++)
    {
        char ch=st.top();
        ans.push_back(ch);
        st.pop();
    }

    cout<<"The reversed string is :"<<ans;
    return 0;
}