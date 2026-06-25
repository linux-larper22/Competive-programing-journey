#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("tinh2.inp", "r", stdin);
    freopen("tinh2.out", "w", stdout);
    std::string s;
    std::getline(std::cin, s);
    long long kq = 0, so = 0;
    int dau = 1;
    for (int i = 0; i < s.size(); i++)
        {
        if (s[i] == '+') dau = 1;
        else if (s[i] == '-') dau = -1;
        else if (s[i] >= '0' && s[i] <= '9')
            {
            so = 0;
            while (i < s.size() && s[i] >= '0' && s[i] <= '9')
                {
                so = so * 10 + (s[i] - '0');
                i++;
            }
            kq += dau*so;
            i--;
        }
    }
    std::cout << kq;
}
