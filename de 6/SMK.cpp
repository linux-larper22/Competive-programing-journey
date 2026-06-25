#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("smk.inp", "r", stdin);
    freopen("smk.out", "w", stdout);
    int n, k;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    long long tong = 0;
    for (int i = 0; i < k; i++) tong += a[i];
    long long min_tong = tong
    for (int i = k; i < n; i++)
        {
        tong = tong - a[i - k] + a[i];
        min_tong = max(min_tong, tong);
    }

    cout << min_tong;
}

