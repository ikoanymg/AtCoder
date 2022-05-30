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

    int x = N * B;

    bool color = true;

    REP3(i, 1, N+1){
        color = !color;
        REP3(j, 1, A+1){
            REP3(k, 1, N+1){
                color = !color;
                REP3(l, 1,  B+1){
                    cout << (color ? '.': '#');
                }
            }
            cout << endl;
            if (N%2 == 1) color = !color;
        }
    }

    return 0;
}