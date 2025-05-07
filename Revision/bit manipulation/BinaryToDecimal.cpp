#include <bits/stdc++.h>
using namespace std;

int main()
{
    int binary;
    cin>>binary;
    int decimal=0;
    int i=0;
    while(binary!=0)
    {
        int remainder=binary%10;
        decimal=decimal+(remainder*pow(2,i));
        binary/=10;
        i++;
    }
    cout<<decimal;
    return 0;
}