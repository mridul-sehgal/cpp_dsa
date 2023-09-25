#include <bits/stdc++.h>
using namespace std;

void subSequences(string str, int index, string output, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude part
    subSequences(str, index + 1, output, ans);

    // include part
    char element = str[index];
    output.push_back(element);
    subSequences(str, index + 1, output, ans);
}

int main()
{
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;
    subSequences(str, index, output, ans);
    for(auto it:ans)
    {
        cout<<" "<<it;
    }

    return 0;
}