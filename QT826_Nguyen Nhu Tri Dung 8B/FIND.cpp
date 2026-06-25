#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("FIND.inp","r", stdin);
    freopen("FIND.out","w", stdout);
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    while (q--) 
    {
        long long x;
        cin >> x;
        int first = lower_bound(a.begin(), a.end(), x) - a.begin();
        int last = upper_bound(a.begin(), a.end(), x) - a.begin() - 1;
        if (first == n || a[first] != x) 
        {
            cout << -1 << "\n";
        }
        else 
        {
            cout << first + 1 << " " << last + 1 << "\n";
        }
    }
    return 0;
}