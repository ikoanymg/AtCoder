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
    
    int N;
    cin >> N;

    vector<int> t(N+1), x(N+1), y(N+1);
    REP3(i, 1, N+1){cin >> t[i] >> x[i] >> y[i];}
    t[0] = 0; x[0] = 0; y[0] = 0;

    bool ans = true;
    vector<int> d(N), p(N);

    REP(i, N){
        d[i] = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
        p[i] = (t[i+1] - t[i]) - d[i];
        if (p[i] < 0) ans = false;
        else if (p[i] % 2 == 1) ans = false;
    }

    cout << (ans ? "Yes" : "No") << endl;
}