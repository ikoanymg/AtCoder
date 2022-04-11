#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    std::vector<std::string> s(N), t(N);
    REP (i, N) { std::cin >> s[i] >> t[i]; }
    
    std::vector<string> a(N);
    bool ss = true;
    bool tt = true;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i != j) {
                if (s[i] == s[j] || s[i]==t[j]) ss = false;
                if (t[i] == t[j] || t[i]==s[j]) tt = false;
            }
        }
    }
    bool ans = ss + tt;
    std::cout << (ans ? "Yes": "No") << '\n';
    return 0;
}
