#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("MATKHAU.INP", "r", stdin);
    freopen("MATKHAU.OUT", "w", stdout);
    int soXau;
    cin >> soXau;
    string matKhau = "";
    while (soXau--)
        {
        string xau;
        cin >> xau;
        vector<int> dem(26, 0);
        for (char c : xau)
            dem[c - 'A']++;
        for (int i = 0; i < 26; i++)
            {
            if (dem[i] == 1) {
                matKhau += char(i + 'A');
                break;
            }
        }
    }
    cout << matKhau;
}
