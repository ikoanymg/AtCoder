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
    
    int N;
    cin >> N;

    vector<int> a(N);
    vector<bool> vol(N+2, false); // This contains the existence of each volume of the comic.

    int sold = 0;
    for (int i=0; i<N; i++) {
        cin >> a[i];
        if (a[i]>=vol.size()) sold++; // Sell a[i] if the volume cannot be read
        else if (vol[a[i]]) sold++; // Sell a[i] if the same volume has already existed
        else vol[a[i]] = true;
    }

    int L = 1;
    int R = N+1;
    while(true){
        while(vol[L]) L++; // Increment L while the elements in vol is true from left end
        while(R!=0 && !vol[R]) R--; // Decrement R to the maximum-exiting volume + 1
        if (sold >= 2) {
            sold -= 2;
            vol[L] = true;
        } 
        else{
            if (L>=R) break; // Exit condition
            vol[R] = false;
            sold++;
        }
    }
    cout << L-1 << endl;

    return 0;
}