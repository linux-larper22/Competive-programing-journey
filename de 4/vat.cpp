#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("vat.inp", "r", stdin);
    freopen("vat.out", "w", stdout);
    double n;
    std::cin >> n;
    double goc = n / 1.1;
    double vat = n - goc;
    std::cout << fixed << setprecision(2) << goc << " " << vat;
}

