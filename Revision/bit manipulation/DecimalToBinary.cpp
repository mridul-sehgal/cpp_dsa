#include <bits/stdc++.h>
using namespace std;

int main()
{
    int decimal;
    cin>>decimal;
    int binary=0;
    int i=0;
    while(decimal!=0)
    {
        int remainder=decimal%2;
        binary=binary+ (remainder*pow(10,i));
        decimal=decimal/2;
        i++;
    }
    cout<<binary;
    return 0;
}