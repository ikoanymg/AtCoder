#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
typedef long long ll;

ll N, K, X;
// vector<ll> A(N);
ll A[200001];

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    cin >> N >> K >> X;
    REP(i, N) cin >> A[i];

    ll ans = 0;
    REP(i, N) ans += A[i];

    ll M = 0;
    REP(i, N) M += floor(A[i]/X);
    M = min(K, M);
    ans -= M*X;
    K -= M;

    REP(i, N) A[i] %= X;
    sort(A, A+N);
    // sort(A.begin(), A.end()); //出力がemptyになる（詳しい挙動は未確認）

    REP_R(i, N){
        if (K == 0) break;
        ans -= A[i];
        --K;
    }

    cout << ans << endl;

    return 0;
       
}