#include <iostream>
#include <string>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int64_t> A;
    
    REP (i, n) {
        int type; cin >> type;

        if (type == 1) {
            int64_t x; cin >> x;
            int64_t c; cin >> c;
            REP (j, c) {A.push_back(x);}
        }

        if (type == 2) {
            int64_t c; cin >> c;
            int64_t ans = 0;
            REP (j, c) {
                ans += *A.begin();
                A.erase(A.begin());
            }
            cout << ans << endl;
        }
    }
    

    return 0;
}
