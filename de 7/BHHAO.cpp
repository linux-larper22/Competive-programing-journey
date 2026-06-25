#include <bits/stdc++.h>
using namespace std;
bool laSoHoanHao(int x)
{
    if(x < 2) return false;
    int tongUoc = 1;
    for(int i = 2; i * i <= x; i++)
        {
        if(x % i == 0){
            tongUoc += i;
            if(i * i != x) tongUoc += x / i;
        }
    }
    return tongUoc == x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("BHHAO.INP", "r", stdin);
    freopen("BHHAO.OUT", "w", stdout);
    int soLuong;
    cin >> soLuong;
    int dem = 0;
    while(soLuong--)
        {
        long long so;
        cin >> so;
        int tongChuSo = 0;
        while(so){
            tongChuSo += so % 10;
            so /= 10;
        }
        if(laSoHoanHao(tongChuSo)) dem++;
    }
    cout << dem;
}
