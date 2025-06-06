// in the bubble sort we try to place the maximum element at the end of the array by doing adjacent swaps.

// **************** COMPLEXITY **************

// 1) Time Complexity = O(n^2) worst case scenario
                    //= O(n) best case scenario
// 2) Space Complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0; // this flag checks if there is any swap that happened. If no swaps occur  then the array is already sorted, no need to more forward for further swaps.
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}