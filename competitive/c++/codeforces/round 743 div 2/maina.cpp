#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ans = 0;
    int n; cin >> n;
    string s; cin >> s;
    if(s[n-1] != '0') ans--;
    for(char &x : s){
        if(x != '0'){
            ans++;
            ans += (x - '0');
        }
    }

    cout << ans << "\n";
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