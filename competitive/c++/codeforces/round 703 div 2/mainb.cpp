#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    if(n % 2 == 1)
        cout << 1 << "\n";
    else{
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        long long ans = (long long)(x[n/2]-x[n/2-1]+1)*(y[n/2]-y[n/2-1]+1);
        cout << ans  << "\n";
    }
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