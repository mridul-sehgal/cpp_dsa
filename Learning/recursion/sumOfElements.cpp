#include <bits/stdc++.h>
using namespace std;
int sumArray(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int sum = 0;
    sum = sumArray(arr + 1, size - 1) + arr[0];
    return sum;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int ans = sumArray(arr, 7);
    cout << ans;
    return 0;
}
