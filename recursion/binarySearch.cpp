#include <bits/stdc++.h>
using namespace std;
bool binSearch(int *arr, int s, int e, int key)
{
    int m = s + (e - s) / 2;
    if (s > e)
    {
        return 0;
    }

    if (arr[m] == key)
    {
        return true;
    }

    else if (arr[m] != key && arr[m] > key)
    {
        return binSearch(arr, s, m - 1, key);
    }

    else
    {
        return binSearch(arr, m + 1, e, key);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    bool ans = binSearch(arr, 0, 4, key);
    cout << ans;
    return 0;
}