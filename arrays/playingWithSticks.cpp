#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        int max=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                count++;
                max=a[i];
            }
        }

        cout<<count<<endl;
    }

    return 0;
}