#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
typedef long long ll;


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<pair<int, int>> passed{{0,0}};
    int x = 0, y = 0;

    for (auto c: s) {
        if (c == 'U') y++;
        if (c == 'D') y--;
        if (c == 'R') x++;
        if (c == 'L') x--;

        if (passed.count({x, y})) {
        /*
        公式解説が if (passed.find({x, y}) != passed.end()) となっていて意味がわからなかったけど
        set内にx,yのpairが見つからなかったらfind()関数はpassed.end()を返すので解説のif文の中身はx,yのペアが見つかった場合を示すことになるらしい
        setはアイテムの重複を許さないのでsetに対してcount関数を用いると0か1が返ってくることになって解説のif文と同じ動作をすることになるという理解で良さそう
        */
            cout << "Yes" << endl;
            return 0;
        }
        passed.insert({x,y});
    }
    cout << "No" << endl;
}