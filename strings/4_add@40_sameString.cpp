#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int spaceCount = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            spaceCount = spaceCount + 1;
        }
    }

    int len = str.size();

    int newLength;
    newLength = len + (spaceCount * 2);

    str.resize(newLength);

    int index = newLength - 1;

    for (int k = len - 1; k >= 0; k--)
    {
        if (str[k] == ' ')
        {
            str[index] = '0';
            str[index - 1] = '4';
            str[index - 2] = '@';
            index = index - 3;
        }
        else
        {
            str[index] = str[k];
            index = index - 1;
        }
    }
}
