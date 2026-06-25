#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int x)
{
    if (x < 2) return false;
    int sum = 1;
    for (int i = 2; i * i <= x; i++)
        {
        if (x % i == 0) {
            sum += i;
            if (i != x / i)
                sum += x / i;
        }
    }

    return sum == x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("sohoanhao.inp", "r", stdin);
    freopen("sohoanhao.out", "w", stdout);
    int n;
    cin >> n;
    int dem = 0;
    for (int i = 0; i < n; i++)
        {
        int x;
        cin >> x;
        if (isPerfect(x)) dem++;
    }

    cout << dem;
    return 0;
}
