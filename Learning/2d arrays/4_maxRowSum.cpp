#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int rowVisesum[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        rowVisesum[i] = sum;
    }
    int max = -1;
    int index;
    for (int i = 0; i < 3; i++)
    {
        if (rowVisesum[i] > max)
        {
            max=rowVisesum[i];
            index = i;
        }
    }

    cout << "row with max sum is: " << index+1;

    return 0;
}
