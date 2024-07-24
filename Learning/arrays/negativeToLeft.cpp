#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, -2, 54, -24, 64, -55, 4, 664, 6, -4};
    int front = 0;
    int end = arr.size() - 1;

    while (front <= end)
    {
        if (arr[front] < 0)
        {
            front++;
        }

        else if (arr[end] > 0)
        {
            end--;
        }

        else
        {
            swap(arr[front], arr[end]);
            end--;
            front++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}