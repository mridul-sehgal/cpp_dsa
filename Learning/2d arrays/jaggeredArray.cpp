#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int *size = new int[n];
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        size[i] = m;
        arr[i] = new int[size[i]];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}