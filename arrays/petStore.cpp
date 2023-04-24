#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n % 2 != 0)
    {
        cout << "NO";
    }

    else
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans ^ a[i];
        }

        if (ans == 0)
        {
            cout << "YES";
        }

        else
        {
            cout << "NO";
        }
    }

    return 0;
}
