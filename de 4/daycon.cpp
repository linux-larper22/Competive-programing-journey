#include <bits/stdc++.h>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("daycon", "r", stdin);
    freopen("daycon.out", "w", stdout);
    cin.tie(0);
    int N;
    std::cin >> N;
    int prev, cur;
    std::cin >> prev;
    int len = 1, maxlen = 1;
    for (int i = 2; i <= N; i++) {
        std::cin >> cur;
        if (cur >= prev) {
            len++;
        } else {
            len = 1;
        }
        maxlen = max(maxlen, len);
        prev = cur;
    }
    std::cout << maxlen;
}

