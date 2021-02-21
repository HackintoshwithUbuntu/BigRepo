#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    int l,r;
    while(q--){
        cin >> l >> r;
        cout << (a[l-1]-1) + (k - a[r-1]) + 2*((a[r-1] - a[l-1] + 1)-(r - l+1))<< "\n";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}