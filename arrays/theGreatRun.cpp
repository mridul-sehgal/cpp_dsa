#include <iostream>
using namespace std;
int main()
{

    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    int a[100];
    int ans = 0;

    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int m = k;
        if ((k + i) <= n)
        {
            while (m != 0)
            {
                ans = ans + a[i + (m - 1)];
                m--;
            }
        }

        max1 = max(max1, ans);
        ans = 0;
    }

    cout << endl;
    cout << "Max girls impressesd: " << max1;
    return 0;
}