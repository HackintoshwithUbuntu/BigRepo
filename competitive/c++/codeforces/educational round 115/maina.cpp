#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ans = 0;
    int n; cin >> n;
    string top, bot;
    cin >> top >> bot;
    for(int i = 0; i < n; i++){
        if(top[i] == '1' && bot[i] == '1'){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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