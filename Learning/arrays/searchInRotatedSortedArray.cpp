#include <iostream>
using namespace std;

int getpivot(int a[], int n)
{
    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;

    while (s < e)
    {
        if (a[m] >= a[0])
        {
            s = m + 1;
        }

        else
        {
            e = m;
        }

        m = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pivot = getpivot(a, n);

    if (a[pivot] <= k && k <= a[n - 1])
    {
        cout<< binarySearch(a, pivot, n - 1, k);
    }

    else
    {
        cout<< binarySearch(a, 0, pivot - 1, k);
    }
    return 0;
}