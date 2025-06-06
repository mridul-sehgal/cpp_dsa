#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int answer = number & (number - 1);
    cout << answer;
    return 0;
}