#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
typedef long long ll;

ll k;

bool is_prime(ll N) {
    if (N == 1) return false;
    for (ll i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}

vector<ll> factorize(ll N) {
    vector<ll> factors;

      for (ll i = 2; i <= sqrt(N); i++) {
        while (N % i == 0) {
         factors.push_back(i);
        N /= i;
        }
        if (N == 1) break;
    }
    if (N != 1) factors.push_back(N);
    return factors;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    cin >> k;

    if (is_prime(k)) cout << k << endl;
    else {
        ll num = k;
        vector<ll> factors = factorize(k);
        for (auto& i : factors) {
            if (num % i == 0) {
                num /= i;
                cout << i << endl;
            }
            if (num == 1) {
                cout << i << endl;
                break;
        }
        }
    }

}