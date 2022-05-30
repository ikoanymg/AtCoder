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

    ll ans = 0;
    REP3(i, 1, N+1){
        if (i%A == 0) continue;
        if (i%B == 0) continue;
        else ans += i; 
    }

//    int nAB = N/(A*B);
//    ll sum_AB = nAB*(A*B+nAB*A*B)/2;

//    ans += sum_AB

    cout << ans << endl;

}