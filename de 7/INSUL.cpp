#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("INSUL.INP", "r", stdin);
    freopen("INSUL.OUT", "w", stdout);
    int soVien;
    cin >> soVien;
    vector<long long> gach(soVien);
    for(int i = 0; i < soVien; i++) cin>>gach[i];
    long long nhietDo = gach[0];
    for(int i = 1; i < soVien; i++)
        {
        nhietDo += gach[i];
        if(gach[i] > gach[i-1])
            nhietDo += gach[i] - gach[i-1];
    }
    cout << nhietDo;
}
