#include <bits/stdc++.h>
using namespace std;

int maHoa(char c){
    if(c >= 'a' && c <= 'z') return c - 'a';
    return c - 'A' + 26;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("STRING.INP", "r", stdin);
    freopen("STRING.OUT", "w", stdout);
    int doDaiA, doDaiB;
    cin >> doDaiA >> doDaiB;
    string xauA, xauB;
    cin >> xauA >> xauB;
    vector<int> demA(52, 0), demCuaSo(52, 0);
    for(char c : xauA)
        demA[maHoa(c)]++;
    int soKyTuKhop = 0;
    for(int i = 0; i < 52; i++)
        if(demA[i] == 0) soKyTuKhop++;
    int ketQua = 0;
    for(int i = 0; i < doDaiB; i++){
        int them = maHoa(xauB[i]);
        demCuaSo[them]++;
        if(demCuaSo[them] == demA[them]) soKyTuKhop++;
        if(demCuaSo[them] == demA[them] + 1) soKyTuKhop--;
        if(i >= doDaiA)
            {
            int bot = maHoa(xauB[i - doDaiA]);
            demCuaSo[bot]--;
            if(demCuaSo[bot] == demA[bot]) soKyTuKhop++;
            if(demCuaSo[bot] == demA[bot] - 1) soKyTuKhop--;
        }
        if(soKyTuKhop == 52) ketQua++;
    }
    cout << ketQua;
}
