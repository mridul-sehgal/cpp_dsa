#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, part;
    getline(cin, s);
    getline(cin, part);

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }

    cout << s;
}