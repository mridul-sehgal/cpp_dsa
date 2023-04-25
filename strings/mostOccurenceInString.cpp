#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int number = 0;
        number = s[i] - 'a';
        count[number]++;
    }
    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxi)
        {
            maxi = count[i];
            ans = i;
        }
    }
    char fans = ans + 'a';
    cout<<fans;
}
