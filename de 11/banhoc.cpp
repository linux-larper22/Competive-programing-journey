#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("banhoc.out", "r", stdin);
    freopen("banhoc.out", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    int ban = (a + 1) / 2 + (b + 1) / 2 + (c + 1) / 2;
    cout << ban;
    return 0;
}
