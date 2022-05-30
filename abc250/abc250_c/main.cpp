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
    
    int N, Q;
    cin >> N >> Q;

    vector<int> a(N), pos(N);
    REP(i, N) {
        a[i] = i+1;
        pos[i] = i;
    }

    vector<int> x(Q);
    REP(i, Q) {
        cin >> x[i];
        --x[i];
    }

    int a_t, pos_t;

    REP(i, Q) {
        
    }



    REP(i,N-1) cout << a[i] << " ";
    cout << a.back() << endl;

}