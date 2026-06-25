#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("divisor.inp", "r", stdin);
    freopen("divisor.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x = sqrt((long double)n);
        if (x * x == n) cout << "LE\n";
        else cout << "CHAN\n";
    }
}
