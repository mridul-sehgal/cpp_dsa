#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> mpp;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x]>mpp[maxi])
        {
            maxi=x;
        }
    }

    cout<<maxi;
    return 0;
}
