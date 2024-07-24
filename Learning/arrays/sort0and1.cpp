#include <iostream>
using namespace std;

void sort0and1(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {

        if (a[i] == 0)
        {
            i++;
        }

        else if (a[j] == 1)
        {
            j--;
        }

        else if (a[i] == 1 && a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int arr[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort0and1(arr, n);
}