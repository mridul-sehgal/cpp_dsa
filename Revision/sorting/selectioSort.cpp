// selection sort is  a select and swap algorithm.
// in each step of the algorithm we take the first element of the data and do the comparison with other elements to find the minimum element.
// once the minimum element is found we swap the location of the two elements.
// it uses two loops to run.
// the first loop is used to select the first element of the unsorted part of the array.
// the second loop is used to perform the comparison with this element.

// **************** COMPLEXITY **************

// 1) Time Complexity = O(n^2)
// 2) Space Complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }

            swap(arr[min], arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
    return 0;
}