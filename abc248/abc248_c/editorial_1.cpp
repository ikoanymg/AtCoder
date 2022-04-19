#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const int mod = 998244353;

class mint {
    long long x;
public:
    mint(long long x=0) : x((x%mod+mod)%mod) {}
    mint operator-() const { 
      return mint(-x);
    }
    mint& operator+=(const mint& a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint& a) {
        if ((x += mod-a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const  mint& a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint& a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint& a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint& a) const {
        mint res(*this);
        return res*=a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }
    // for prime mod
    mint inv() const {
        return pow(mod-2);
    }
    mint& operator/=(const mint& a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint& a) const {
        mint res(*this);
        return res/=a;
    }

    friend ostream& operator<<(ostream& os, const mint& m){
        os << m.x;
        return os;
    }
};

int main() {
	int n, m, K;
	cin >> n >> m >> K;
	vector<vector<mint>> dp(n + 1, vector<mint>(K + 1, mint(0)));
	dp[0][0] = 1;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < K; j++) {
			for(int k = 1; k <= m; k++) {
				if(j + k <= K) dp[i + 1][j + k] += dp[i][j];
			}
		}
	}
	mint res = 0;
	for(int i = 1; i <= K; i++) {
		res += dp.back()[i];
	}
	cout << res << endl;
}