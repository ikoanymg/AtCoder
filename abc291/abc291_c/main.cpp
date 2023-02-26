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
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<vector<bool>> arr(n*2, vector<bool>(n*2, false));

    arr[n][n] = true;
    int x = n;
    int y = n;

    bool flag = false;

    for (char c : s) {
        if (c == 'R'){
            x++;
            if (arr[x][y]==true) {
                flag = true;
            }
            arr[x][y] = true;
        }
        if (c == 'L'){
            x--;
            if (arr[x][y]==true) {
                flag = true;
            }
            arr[x][y] = true;
        }
        if (c == 'U'){
            y++;
            if (arr[x][y]==true) {
                flag = true;
            }
            arr[x][y] = true;
        }
        if (c == 'D'){
            y--;
            if (arr[x][y]==true) {
                flag = true;
            }
            arr[x][y] = true;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}