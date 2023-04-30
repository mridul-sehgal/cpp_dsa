#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int key;
    cin >> key;
    pair<int, int> index;
    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == key)
            {
                flag = true;
                index.first = i;
                index.second = j;
            }
        }
    }

    if (flag)
    {
        cout << "Found at: (" << index.first << "," << index.second << ")";
    }

    else
    {
        cout << "Not Found";
    }
    return 0;
}
