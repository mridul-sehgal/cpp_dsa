#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[200000], check[200000] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            check[a[i]]++;
        }
        int max1 = -1;
        int key;
        int j;
        for (j = 0; j < n; j++)
        {
            if (max1 < check[j])
            {
                max1 = check[j];
                key = j;
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != key)
            {
                count++;
            }
        }

        cout << count;
    }

    return 0;
}