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
    vector<int> A(N),B(N);
    for (int i = 0; i<N; i++){
        cin >> A[i];
        B[i] = 0;
        while (true){
            if (A[i]%2==0){
                A[i] /= 2;
                B[i]++;
            }
            else break;
        }
    }
 
    cout << *min_element(B.begin(),B.end()) << endl;

}