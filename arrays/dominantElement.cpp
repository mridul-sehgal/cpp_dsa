#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int a[1000];
        int check[1000] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            check[a[i]]++;
        }

        sort(check, check + n, greater<int>());

        if (check[0] > check[1])
        {
            cout << "YES"<<endl;
        }

        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}