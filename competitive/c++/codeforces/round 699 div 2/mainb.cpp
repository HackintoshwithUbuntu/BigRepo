#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ans, n, k;
    cin >> n >> k;
    vector<int> h(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        h[i] = x;
    }
    for(int i = 0; i < k; i++){
        int stop = 0;
        for(int x = 0; x < n - 1; x++){
            if(h[x] >= h[x + 1])
                stop++;
            else 
                break;
        }
        h[stop]++;
        if(stop == n - 1){
            ans = -1;
            break;
        }
        if(i == k-1)
            ans = stop + 1;
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