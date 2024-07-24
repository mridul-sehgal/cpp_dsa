#include <bits/stdc++.h>
using namespace std;

void numpadText(string digit, string mapping[], string output, int index, vector<string> &ans)
{
    if(index>=digit.length())
    {
        ans.push_back(output);
        return;
    }

    int number=digit[index]-'0';
    string value=mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        numpadText(digit, mapping, output, index+1, ans);
        output.pop_back();//backtracking
    }
}

int main()
{
    string digit = "23";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output = "";
    int index = 0;
    vector<string> ans;

    if (digit.length() < 0)
    {
        cout << "empty string";
    }

    numpadText(digit, mapping, output, index, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}