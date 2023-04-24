#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        int scount = 0, rcount = 0;
        string s, r;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                scount++;
            }

            if(r[i]=='1')
            {
                rcount++;
            }
        }

        if (scount == rcount)
        {
            cout << "YES";
        }

        else
        {
            cout << "NO";
        }
    }

    return 0;
}