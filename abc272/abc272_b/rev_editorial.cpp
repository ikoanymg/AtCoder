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
    
    int N, M;
    cin >> N >> M;

    vector<vector<bool>> flag(N, vector<bool>(N, false));

    REP(i, M){
        int k;
        cin >> k;

        vector<int> a(k);
        for (auto &v : a) cin >> v, --v;
        REP (j, a.size()-1){
            REP3 (k, j+1, a.size()) {
                flag[a[j]][a[k]] = true;
            }
        }
    }

    bool ans = 1;
    REP (i, N) {
        REP3 (j, i+1, N) {
            ans &= flag[i][j];
        }
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}