#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a,b,k;
    cin >> a >> b >> k;
    vector<pair<int,int>> pairs(k);
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        pairs[i].first = x;
    }
    for(int i = 0; i < k; i++){
        int x; cin >> x;
        pairs[i].second = x;
    }
    int ans = 0;

    for(int i = 0; i < k; i++){
        int f = pairs[i].first;
        int s = pairs[i].second;
        for(int m = i; m < k; m++){
            if(pairs[m].first != f && pairs[m].second != s)
                ans++;
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