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

    vector<int> odd, even;
    REP (i, N) {
        int a;
        cin >> a;
        if(a & 1) odd.push_back(a);
        else even.push_back(a);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    int mx = -1;
    if (odd.size() >= 2) mx = max(mx, odd[0] + odd[1]);
    if (even.size() >= 2) mx = max(mx, even[0] + even[1]);

    cout << mx << endl;

    return 0;
}