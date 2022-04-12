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
    vector<int> a(N);
    REP(i,N) {cin >> a[i];}

    sort(a.begin(), a.end(), greater<int>()); // greater<int>()で降順にするのを忘れないように
    int ans = 0;

    REP(i,N){
        if(i%2 == 0) ans += a[i];
        else ans -= a[i];
    }
    
    cout << ans << endl;
}