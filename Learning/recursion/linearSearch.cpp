#include <iostream>
using namespace std;

bool linSearch(int *arr, int size, int key)
{
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        return (linSearch(arr + 1, size - 1, key));
    }
}

int main()
{
    int arr[5] = {1, 2, 1, 4, 5};
    int key = 5;
    bool ans = linSearch(arr, 5, key);
    cout << ans;
    return 0;
}