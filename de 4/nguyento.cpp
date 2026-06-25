#include <bits/stdc++.h>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("nguyento.inp", "r", stdin);
    freopen("nguyento.out", "w", stdout);
    long long N;
    std::cin >> N;
    long long tmp = N;
    std::cout << tmp << "=";
    int dem = 0;
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            int cnt = 0;
            while (N % i == 0) {
                N /= i;
                cnt++;
            }
            if (dem > 0) std::cout << "x";
            std::cout << i << "^" << cnt;
            dem++;
        }
    }

    if (N > 1) {
        if (dem > 0) std::cout << "x";
        std::cout << N << "^1";
    }
}
