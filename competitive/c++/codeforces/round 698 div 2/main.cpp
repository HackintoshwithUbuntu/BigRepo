#include <bits/stdc++.h>

using namespace std;

void solve() {
    int used[101] = {0};
    int n; cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        used[x]++;
        if(used[x] > ans)
            ans = used[x];
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