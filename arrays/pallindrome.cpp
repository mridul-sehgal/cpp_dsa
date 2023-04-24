#include <bits/stdc++.h>
#include <string>
using namespace std;
int special(char ch)
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int main()
{
    string s;
    getline(cin, s);
    int st = 0;
    int e = s.length() - 1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    while (st <= e)
    {
        if (st == e)
        {
            cout << "yes";
            return 0;
        }

        else
        {

            while (special(s[st]))
            {
                st++;
            }

            while (special(s[e]))
            {
                e--;
            }

            if (s[st] == s[e])
            {
                cout << endl
                     << s[st] << "  " << s[e];
                st++;
                e--;
            }

            else
            {
                cout << endl
                     << endl
                     << s[st] << "  " << s[e];
                cout << "no";
                return 0;
            }
        }
    }

    cout << "yes";

    return 0;
}
// c1 O$d@eeD o1c