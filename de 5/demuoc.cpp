#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("demuoc.inp", "r", stdin);
    freopen("demuoc.out", "w", stdout);
    int soBoTest;
    cin >> soBoTest;
    while (soBoTest--)
        {
        long long a, b;
        cin >> a >> b;
        long long soUoc = 1;
        long long uoc = 2;
        while (uoc * uoc <= a || uoc * uoc <= b)
        {
            int soMu = 0;
            while (a % uoc == 0)
            {
                a /= uoc;
                soMu++;
            }
            while (b % uoc == 0)
            {
                b /= uoc;
                soMu++;
            }
            if (soMu > 0)
            {
                soUoc *= (soMu + 1);
            }
            uoc++;
        }
        if (a > 1 && b > 1 && a == b)
        {
            soUoc *= 3;
        }
    else
        {
            if (a > 1) soUoc *= 2;
            if (b > 1) soUoc *= 2;
        }
        cout << soUoc <<'\n';
    }
}
