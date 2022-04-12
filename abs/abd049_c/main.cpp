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
    
    string S;
    cin >> S;
    

    string S_reversed(S);
    reverse(S_reversed.begin(), S_reversed.end());

    //cout << S_reversed << endl;

    bool flag = true;

    REP(i, S_reversed.size()){
        //cout << i << endl;
        if (S_reversed.substr(i, 6) == "resare") i += 5;
        else if (S_reversed.substr(i, 7) == "remaerd") i += 6;
        else if (S_reversed.substr(i, 5) == "esare") i += 4;
        else if (S_reversed.substr(i, 5) == "maerd") i += 4;
        else {
            flag = false;
            break;
        }
    }
    cout << (flag ?  "YES" : "NO") << endl;
}