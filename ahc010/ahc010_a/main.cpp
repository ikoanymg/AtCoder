#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
typedef long long ll;

vector<vector<int>> to = {
                        {1, 0, -1, -1},
                        {3, -1, -1, 0},
                        {-1, -1, 3, 2},
                        {-1, 2, 1, -1},
                        {1, 0, 3, 2},
                        {3, 2, 1, 0},
                        {2, -1, 0, -1},
                        {-1, 3, -1, 1},
                        };

vector<int> di = {0, -1, 0, 1};
vector<int> dj = {-1, 0, 1, 0};



int circ_len(vector<string> t_in, int i, int j){
    vector<vector<int>> t(30, vector<int>(30));
    REP(u,30){
        REP(v,30){
            t[u][v] = int(t_in[u][v]-'0');
        }
    }

    int length = 0;

    int d = 0;
    while (true){
            int d2 = to[t[i][j]][d];
            if (d2 == -1) break;
            i += di[d2];
            j += dj[d2];
            if (i < 0 || i >= 30 || j < 0 || j >= 30) break;
            d = (d2 + 2) % 4;
            length += 1;
    }
    return length;
}



int rotate (int t) {
    if (t == 0) return 1;
    if (t == 1) return 2;
    if (t == 2) return 3;
    if (t == 3) return 0;
    if (t == 4) return 5;
    if (t == 5) return 4;
    if (t == 6) return 7;
    if (t == 7) return 6;
}



int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    vector<string> t_in(30);
    REP(i, 30) cin >> t_in[i];


    
    vector<int> res(900, 0);



    REP(i, 900) cout << res[i];
    cout << endl;

}