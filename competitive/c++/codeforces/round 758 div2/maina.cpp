#include <bits/stdc++.h>

using namespace std;

int n, b, a[100000];

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i =0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    int ans = a[0];
    
    for(int i = 0; i < n; i++){
        ans=ans & a[i];
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