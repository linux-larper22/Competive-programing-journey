#include <bits/stdc++.h>
using namespace std;
int khoiLuong(char nguyenTo)
{
    if(nguyenTo == 'H') return 1;
    if(nguyenTo == 'C') return 12;
    if(nguyenTo == 'N') return 14;
    return 16;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("PHANTU.INP", "r", stdin);
    freopen("PHANTU.OUT", "w", stdout);
    string congThuc;
    cin >> congThuc;
    long long tongKhoiLuong = 0;
    for(int i = 0; i < congThuc.size(); )
        {
        char nguyenTo = congThuc[i++];
        int soLuong = 0;
        while(i < congThuc.size() && isdigit(congThuc[i]))
        {
            soLuong = soLuong * 10 + (congThuc[i] - '0');
            i++;
        }
        if(soLuong == 0) soLuong=1;
        tongKhoiLuong += 1LL * khoiLuong(nguyenTo) * soLuong;
    }
    cout << tongKhoiLuong;
}
