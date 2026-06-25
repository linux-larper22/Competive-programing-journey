#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("xrange.inp", "r", stdin);
    freopen("xrange.out", "w", stdout);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    while (q--) {
        long long L, R;
        cin >> L >> R;
        int left = lower_bound(a.begin(), a.end(), L) - a.begin();
        int right = upper_bound(a.begin(), a.end(), R) - a.begin();
        cout << right - left << '\n';
    }
}

