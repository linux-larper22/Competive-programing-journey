#include <bits/stdc++.h>
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    freopen("char.inp", "r", stdin);
    freopen("char.out", "w", stdout);
    std::string s;
    std::getline(std::cin, s);
    int dem[256] = {0};
    for (char c : s) dem[c]++;
    int sl = 0;
    for (int i = 0; i < 256; i++)
        if (dem[i] > 0) sl++;
    std::cout << sl << "\n";
    for (char c = 'A'; c <= 'Z'; c++)
        if (dem[c]) std::cout <<c<< " " <<dem[c]<< "\n";
    for (char c = 'a'; c <= 'z'; c++)
        if (dem[c]) std::cout <<c<< " " <<dem[c]<< "\n";
    for (char c = '0'; c <= '9'; c++)
        if (dem[c]) std::cout <<c<< " " <<dem[c]<< "\n";
}
