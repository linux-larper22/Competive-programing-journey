#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("SOMU.INP", "r", stdin);
    freopen("SOMU.OUT", "w", stdout);
    int soBoTest;
    cin >> soBoTest;
    while (soBoTest--)
        {
        long long N, K;
        cin >> N >> K;
        long long soMu = 0;
        for (long long luyThua = K; luyThua <= N; luyThua *= K) {
            soMu += N / luyThua;
        }
        cout << soMu << '\n';
    }
}
