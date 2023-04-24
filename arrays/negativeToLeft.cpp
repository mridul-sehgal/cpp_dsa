#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        if (a[left] < 0)
        {
            left++;
        }

        else if (a[right] > 0)
        {
            right--; //-12, 11, -13, -5, 6, -7, 5, -3, -6
        }

        else if (a[left] > 0 && a[right] < 0)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}