#include <bits/stdc++.h>
using namespace std;
long long boiChungNhoNhat(long long a, long long b)
{
    return a/ __gcd(a,b)*b;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    long long m, n, x, y;
    cin >> m >> n >> x >> y;
    long long lcm = boiChungNhoNhat(x, y);
    long long ketQua = n / lcm - (m - 1) / lcm;
    cout << ketQua;
}
