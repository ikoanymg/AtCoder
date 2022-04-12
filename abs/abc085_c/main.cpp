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
    int N, Y;
    cin >> N >> Y;
    Y /= 1000;
    int a = -1, b = -1, c = -1;

    REP(i, N+1){
        REP(j, N+1){
            int k = N - i - j; // 3つ目のforループ回避
            if (k < 0) break; // だいじ
            if (10 * i + 5 * j + k == Y) {
                a = i;
                b = j;
                c = k;
            }
        }
    }
    cout << a << " " << b << " " << c << endl;
}