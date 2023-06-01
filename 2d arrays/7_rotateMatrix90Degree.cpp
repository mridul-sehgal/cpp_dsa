#include <iostream>
using namespace std;
int main()
{
    int a[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < (4 / 2); j++)
        {
            swap(a[i][j], a[i][4 - j - 1]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}
