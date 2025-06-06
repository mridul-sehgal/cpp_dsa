#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, bit;
    cin >> number >> bit;
    int answer = (number | (1 << bit));
    cout << answer;
    return 0;
}