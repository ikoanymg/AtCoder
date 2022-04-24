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
    
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int c1 = x/(a+c), c2 = x/(d+f);

    int d1 = a*b*c1 + b*min((x-c1*(a+c)), a);
    int d2 = d*e*c2 + e*min((x-c2*(d+f)), d);

    if (d1 > d2) cout << "Takahashi" << endl;
    else if (d2 > d1) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
}