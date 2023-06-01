#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int key;
    cin >> key;

    int s = 0;
    int e = 8; //(rows*column)-1

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int el = a[mid / 3][mid % 3]; // a[mid / column][mid % column]

        if (el == key)
        {
            cout << "Element found";
            return 0;
        }

        else if (el > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    cout << "NOT FOUND";
    return 0;
}
