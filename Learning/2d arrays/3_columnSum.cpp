#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3];
    int rowVisesum[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < 3; j++)
    {
        int sum=0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        rowVisesum[j]=sum;
    }

    for(int i=0;i<3;i++)
    {
        cout<<rowVisesum[i]<<" ";
    }

    return 0;
}
