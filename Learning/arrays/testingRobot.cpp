#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        cin >> x;
        int data[100];
        data[0] = x;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                data[i + 1] = data[i] - 1;
            }

            if (s[i] == 'R')
            {
                data[i + 1] = data[i] + 1;
            }
        }
        int m = n + 1;

        sort(data, data + m);

        int i = 0, count = 0;
        while (i < m)
        {
            if (data[i] != data[i + 1])
            {
                count++;
            }

            i++;
        }

        cout << count;
    }

    return 0;
}