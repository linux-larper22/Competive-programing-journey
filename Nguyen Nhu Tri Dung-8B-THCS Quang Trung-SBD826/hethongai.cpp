#include <bits/stdc++.h>
using namespace std;

long long dp[20][11][2][2];
string s;

long long go(int pos, int prevDigitIndex, bool tight, bool leadingZero) {
    if (pos == (int)s.size()) {
        return leadingZero ? 0 : 1;
    }
    long long &res = dp[pos][prevDigitIndex][tight][leadingZero];
    if (res != -1 && !tight) return res;

    int limit = tight ? s[pos] - '0' : 9;
    long long ans = 0;
    for (int d = 0; d <= limit; ++d) {
        bool nextLeadingZero = leadingZero && d == 0;
        int prevDigit = prevDigitIndex - 1;
        if (!nextLeadingZero) {
            if (!leadingZero && d == prevDigit) continue;
        }
        int nextPrevIndex = nextLeadingZero ? 0 : d + 1;
        ans += go(pos + 1, nextPrevIndex, tight && d == limit, nextLeadingZero);
    }

    if (!tight) res = ans;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("Count1.Inp", "r", stdin);
    freopen("Count1.Out", "w", stdout);

    if (!(cin >> s)) return 0;
    memset(dp, -1, sizeof(dp));
    cout << go(0, 0, true, true);
    return 0;
}
