#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number,bit;
    cin>>number>>bit;
    if((number & (1<<bit))!=0)
    cout<<true;
    else
    cout<<false;
    return 0;
}