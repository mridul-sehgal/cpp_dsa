#include <iostream>
using namespace std;

int pivot(int a[], int n)
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

int main()
{
    int n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Pivot index is: " << pivot(a, n);
    return 0;
}