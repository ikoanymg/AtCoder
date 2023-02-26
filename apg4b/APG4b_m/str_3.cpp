#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    str = "LOOOOOOOOOOL";

    int cnt = 0;
    for (int i = 0; i < str.size(); i++){
        if (str.at(i) == 'O') cnt++;
    }

    cout << cnt << endl;
}