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

    // for (int j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout<< " "<<arr[i][j];
    //     }

    //     cout<<endl;
    // }

    int j=0,i=0;
    while(j<3)
    {
        if(i==0)
        {
            for( i=0;i<3;i++)
            {
                cout<<" "<<arr[i][j];
            }
            cout<<endl;
        }

        else if(i==3)
        {
            for( i=3;i>0;i--)
            {
                cout<<" "<<arr[i-1][j];
            }
            cout<<endl;
        }

        j++;
    }

    return 0;
}
