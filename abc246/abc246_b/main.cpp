#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

pair<double, double> solve(int A, int B) {
    // TODO: edit here
    return {A/sqrt(pow(A,2)+pow(B,2)), B/sqrt(pow(A,2)+pow(B,2))};
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int A, B;
    std::cin >> A >> B;
    auto [c, d] = solve(A, B);

    std::cout << std::setprecision(13) << c << ' ' << d << '\n';
    return 0;
}
