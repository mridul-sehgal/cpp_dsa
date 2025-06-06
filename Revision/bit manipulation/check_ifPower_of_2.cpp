#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin>>number;
    if ((number & (number - 1)) == 0)
        cout << true;
    else
        cout << false;
    return 0;
}