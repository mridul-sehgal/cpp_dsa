#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(j==0 || i==j)
                arr[i][j]=1;
            else
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}