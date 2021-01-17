#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int d = lcm(s.length(), t.length());
    string ts = s, tt = t;

    while(ts.length() < d){
        ts = ts += s;
    }
    while(tt.length() < d){
        tt = tt += t;
    }

    if(ts == tt)
        cout << tt << "\n";
    else
        cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}