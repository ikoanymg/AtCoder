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

    int cnt = 0;
    sort(A.begin(), A.end());

    REP(i, N) {
        if (A[i] == 1){
            cnt += 1 + 3*(N-1);
        }
        REP(j, N){
            REP3(k, j+1, N){
                if (i != j && A[i]==A[j]*A[k]) cnt += 2;
                else if (i == j && A[i]==A[j]*A[k]) cnt += 1;
            }
        }
    }

    cout << cnt << endl;
}