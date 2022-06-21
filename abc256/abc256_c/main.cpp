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
    
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2  >> h3 >> w1 >> w2 >> w3;

    // a  b  c: h1
    // d  e  f: h2
    // g  h  i: h3
    // w1 w2 w3

    int res = 0;

    REP3(a,1,29){
        REP3(b,1,29){
            REP3(d,1,29){
                REP3(e,1,29){
                    int c = h1 - a - b;
                    int f = h2 - e - d;
                    int g = w1 - a - d;
                    int h = w2 - b - e;
                    int i = w3 - c - f;

                    if (min({c,f,g,h,i})>0 && g+h+i == h2) ++res;
                }

            }
        }
    }

    cout << res << endl;
}