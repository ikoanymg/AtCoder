#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;
typedef long long ll;

int digi_sum(int I){
    int sum = 0;
    int f;
    while (I > 0) {
        f = I%10;
        sum += f;
        I = (I-f)/10; // int だから I /= 10 でおk （fいらない）
    }
    return sum;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int N, A, B;
    cin >> N >> A >> B;

    int tot = 0;
    REP3 (i, 1, N+1){
        int sum = digi_sum(i);
        if (A <= sum && sum <= B) tot += i;
    }

    cout << tot << endl;
}