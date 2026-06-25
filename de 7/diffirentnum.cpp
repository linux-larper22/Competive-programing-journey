#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;
int chuong[MAX] = {0};
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int distinct_count = 0;
    for (int i = 0; i < n; i++)
        {
        cin >> a[i];
        if (chuong[a[i]] == 0) {
            distinct_count++;
            chuong[a[i]] = 1;
        }
    }
    cout << distinct_count << endl;
}

