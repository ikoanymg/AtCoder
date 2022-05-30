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
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H, vector<char>(W));
    REP(i,H){
        REP(j,W) cin >> S[i][j];
    }

    int x1, y1, x2, y2;
    int tag = 0;
    REP(i, H){
        REP(j, W){
            if(S[i][j] == 'o'){
                x1 = j;
                y1 = i;
                ++tag;
            }
             if(S[i][j] == 'o' && tag==1){
                 x2 = j;
                 y2 = i;
             }
        }
    }

    int ans;
    ans = abs(x1-x2)+abs(y1-y2);

    cout << ans << endl;
    
}