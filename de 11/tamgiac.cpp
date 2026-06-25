#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("tamgiac.inp", "r", stdin);
    freopen("tamgiac.out", "w", stdout);
    long long a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
