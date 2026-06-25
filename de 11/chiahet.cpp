#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("chiahet.out", "r", stdin);
    freopen("chiahet.out", "w", stdout);
    int a, b;
    cin >> a >> b;
    int d2 = b / 2 - (a - 1) / 2;
    int d3 = b / 3 - (a - 1) / 3;
    int d6 = b / 6 - (a - 1) / 6;
    int result = d2 + d3 - d6;
    cout << result;
    return 0;
}
