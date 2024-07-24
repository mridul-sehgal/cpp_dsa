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

    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        swap(a[i], a[minindex]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}