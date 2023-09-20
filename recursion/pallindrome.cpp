#include <bits/stdc++.h>
using namespace std;

bool pallindrome(string &str, int s, int e)
{

    if (s > e)
    {
        return true;
    }

    if(str[s]!=str[e])
    {
        return false;
    }

    else if(str[s]==str[e])
    return true;
    // s++;
    // e--;
    return pallindrome(str, ++s, --e); // first updates the value and then passed to the function
}

int main()
{
    string str = "abcba";
    bool ans=pallindrome(str, 0, str.length() - 1);
    cout << ans;

    return 0;
}