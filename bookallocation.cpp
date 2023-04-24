#include <iostream>
using namespace std;
bool ispossible(int a[], int n, int m, int mid)
{

    int studentCount = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum + a[i] <= mid)
        {
            pagesum += a[i];
        }

        else
        {
            studentCount++;
            if (studentCount > m || a[i] > mid)
            {
                return false;
            }

            pagesum = a[i];
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int a[10], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (ispossible(a, n, m, mid))
        {
           
            ans = mid;
            end = mid - 1;
        }

        else
        {
           
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    cout << ans;
    return 0;
}