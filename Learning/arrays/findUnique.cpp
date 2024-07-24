#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int a = 0;

    // ***my logic***
    // int count[100] = {0};
    // for(int i=0;i<size;i++)
    // {
    //     count[arr[i]]++;
    // }

    // for(int i=0;i<100;i++)
    // {
    //     if(count[i]==1)
    //     {
    //         a=i;

    //     }
    // }

    for (int i = 0; i < size; i++)
    {
        a = a ^ arr[i];
    }

    return a;
}

int main()
{
    int size;
    cin >> size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << findUnique(arr, size);
    return 0;
}