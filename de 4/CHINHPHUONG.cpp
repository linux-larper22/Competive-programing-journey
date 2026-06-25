#include <bits/stdc++.h>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("chinhphuong.inp", "r", stdin);
    freopen("chinhphuong.out", "w", stdout);
    long long x;
    long long ans = 0;
    while (std::cin >> x) {
        long long k = sqrt(x);s
        if (k * k == x && k % 2 == 0)
            {
            ans = x;
            break;
        }
    }
    std::cout << ans;
}

