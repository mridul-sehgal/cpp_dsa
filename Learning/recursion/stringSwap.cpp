#include <bits/stdc++.h>
using namespace std;

void stringSwap(string &str, int s, int e)
{

    if (s > e)
    {
        return;
    }

    swap(str[s], str[e]);
    // s++;
    // e--;
    return stringSwap(str, ++s, --e); // first updates the value and then passed to the function
}

int main()
{
    string str = "abcde";
    stringSwap(str, 0, str.length() - 1);
    cout << str;

    return 0;
}