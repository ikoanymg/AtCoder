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
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && b >= c) cout << "Yes" << endl;
    else if (c >= b && b >= a) cout << "Yes" << endl;
    else if (a==b && b==c) cout << "Yes" << endl;
    else cout << "No" << endl;
}