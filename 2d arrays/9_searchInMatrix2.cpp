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

    int rowIndex = 0;
    int colIndex = 2; // col-1;

    while (rowIndex < 3 && colIndex >= 0)
    {
        int el = a[rowIndex][colIndex];
        if (el == key)
        {
            cout << "Found";
            return 0;
        }

        else if (el > key)
        {
            colIndex--;
        }

        else
        {
            rowIndex++;
        }
    }

    cout << "NOT FOUND";
    return 0;
}
