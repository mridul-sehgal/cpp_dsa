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
            return 1;
        }

        else
        {

            while (special(s.at(st)) && st < e)
            {
                st++;
            }

            while (special(s.at(e)) && st < e)
            {
                e--;
            }

            if (s.at(st) == s.at(e))
            {
                st++;
                e--;
            }

            else
            {
                return 0;
            }
        }
    }

    return 1;
}
// c1 O$d@eeD o1c