#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("demgao.inp", "r", stdin);
    freopen("demgao.out", "w", stdout);
    long long a,b,k;
    cin>>a>>b>>k;
    if (k == 0)
        {
        cout << 0;
        return 0;
    }
    long long ket_qua=b/k-(a-1)/k;
    cout << ket_qua;
}

