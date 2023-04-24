#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[20];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl
         << "Original array: ";


    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    
    
        //  ***my logic***

    // if (n % 2 == 0)
    // {
    //     for (int i = 0; i < n - 1; i = i + 2)
    //     {
    //         swap(a[i], a[i + 1]);
    //     }
    // }

    // else
    // {
    //     for (int i = 0; i < n - 2; i = i + 2)
    //     {
    //         swap(a[i], a[i + 1]);
    //     }
    // }

    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
           swap(a[i], a[i + 1]); 
        }
    }

    cout << endl
         << "alternate swapped array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}