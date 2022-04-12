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
    
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int cnt = 0;

    REP(i, A+1){
        REP(j, B+1){
            REP(k, C+1){
                if (500 * i + 100 * j + 50 * k == X) ++cnt;
            }
        }
    }

    cout << cnt << endl;

}