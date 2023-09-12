#include <bits/stdc++.h>
using namespace std;

void numToWord(int num)
{
    map<int, string> mpp;
    mpp = {
        {0, "zero"},
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
    };

    if (num == 0)
    {
        return;
    }

    int rem = num % 10;
    num = num / 10;

    numToWord(num);
    cout << mpp[rem]<<" ";
}

int main()
{
    int num;
    cin >> num;
    numToWord(num);
}