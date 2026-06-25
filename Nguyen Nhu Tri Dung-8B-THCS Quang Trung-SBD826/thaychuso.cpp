#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("thaychuso.inp","r", stdin);
    freopen("thaychuso.out","w", stdout);
    int T;
    cin >> T;
    while (T--)
        {
        string n;
        cin >> n;
        for (char &c : n)
            {
            if (c == '0') c = '5';
        }
        cout << n << '\n';
    }
    return 0;
}
