#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int a[10], b[10];
    cin >> n >> m;
    int check[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        
    }

    for (int i = 0; i < n; i++)
    {

        check[a[i]]++;
    }

    for (int i = 0; i < m; i++)
    {

        check[b[i]]++;
    }

    int count = 0;

    for (int i = 0; i < 100000; i++)
    {
        if (check[i] != 0)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
