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
    REP(i, N) M += floor(A[i]/X); // a-X>=0の範囲でクーポンを使っていく(K枚以上使ってもいいとして) 
    M = min(K, M); // 枚数をKで抑える
    ans -= M*X; // 実際に使った枚数分値下げする
    K -= M; // 与えられた枚数から使った枚数を引く

    REP(i, N) A[i] %= X;
    sort(A, A+N); // 額のでかい順にクーポンを消費していく
    // sort(A.begin(), A.end()); //出力がemptyになる（詳しい挙動は未確認）

    REP_R(i, N){
        if (K == 0) break; // クーポンなくなったら終わり
        ans -= A[i]; // クーポンと相殺させていく
        --K; // クーポン減らす
    }

    cout << ans << endl;

    return 0;
       
}