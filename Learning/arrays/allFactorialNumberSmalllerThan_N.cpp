#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

void makeArray(vector<long long> &ans, long long n, int i) {
    long long factorial = fact(i);
    if (factorial > n) {
        return;
    }
    ans.push_back(factorial);
    makeArray(ans, n, i + 1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    makeArray(ans, n, 1); // Start from 1!
    return ans;
}

int main() {
    long long n = 23219011584;
    vector<long long> ans = factorialNumbers(n);
    for (auto it : ans) {
        cout << it << " ";
    }
    return 0;
}
