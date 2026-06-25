#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) 
{
    if (n<2) return false;

    for (long long i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("PRIME.inp","r", stdin);
    freopen("PRIME.out","w", stdout);
    long long n;
    cin >> n;
    if (isPrime(n))
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}