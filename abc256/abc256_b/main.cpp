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
    vector<int> A(N);
    REP(i,N) cin >> A[i];

    int P = 0;
    int s;
    vector<int> c(N,0);

    REP(i,N) {
        s = A[i];
        REP(j,i+1){
            c[j]+=s;
            if (c[j]>3) {
                ++P;
                c[j] = -500;
            }
        }
    }

    cout << P << endl;
}