#include <bits/stdc++.h>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("daycon.inp", "r", stdin);
    freopen("daycon.out", "w", stdout);
    int n;
    std::cin >> n;
    int truoc, hien_tai;
    std::cin >> truoc;
    int dai_nhat = 1, dem = 1;
    for (int i = 2; i <= n; i++)
        {
        std::cin >> hien_tai;
        if (hien_tai < truoc)
            dem++;
        else
            dem = 1;
        if (dem > dai_nhat) dai_nhat = dem;
        truoc = hien_tai;
    }
    std::cout << dai_nhat;
}
