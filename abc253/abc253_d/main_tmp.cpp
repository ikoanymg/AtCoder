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
    
    int N, A, B;
    cin >> N >> A >> B;
//    ll sum_tot = N*(1+N)/2; 

    int nA = N/A;
    int nB = N/B;
    int nAB = N/(A*B);

    ll ans;

    ll sum_A = nA*(A+nA*A)/2;
    ll sum_B = nB*(B+nB*B)/2;
    ll sum_AB = nAB*(A*B+nAB*A*B)/2;

    ans = 0 - (sum_A + sum_B - (nA+nB-nAB)*sum_AB);

    REP3(i, 1, N+1) ans += i;

    cout << ans << endl;
}
