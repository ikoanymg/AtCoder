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
    
    int H, W, R, C;
    cin >> H >> W;
    cin >> R >> C;

    int ans = 0;

    if (R-1 >= 1) ++ans;
    if (R+1 <= H) ++ans;
    if (C-1 >= 1) ++ans;
    if (C+1 <= W) ++ans;

    cout << ans << endl;

}