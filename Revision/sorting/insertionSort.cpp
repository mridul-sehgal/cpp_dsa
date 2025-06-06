// takes an element and places it in its correct position.

// **************** COMPLEXITY **************

// 1) Time Complexity = O(n^2) worst case scenario
                    //= O(n) best case scenario
// 2) Space Complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}