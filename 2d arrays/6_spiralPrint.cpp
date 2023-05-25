#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int scol = 0;
    int srow = 0;
    int ecol = 2; // col-1
    int erow = 2; // row-1

    int count = 0;
    int total = 9; //(row*col)

    while (count < total)
    {
        for (int i = scol; count < total && i <= ecol; i++)
        {
            cout << arr[srow][i] << " ";
            count++;
        }
        srow++;

        for (int i = srow; count < total && i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
            count++;
        }
        ecol--;

        for (int i = ecol; count < total && i >= scol; i--)
        {
            cout << arr[erow][i] << " ";
            count++;
        }
        erow--;

        for (int i = erow; count < total && i >= srow; i--)
        {
            cout << arr[i][scol] << " ";
            count++;
        }
        scol++;
    }

    return 0;
}
