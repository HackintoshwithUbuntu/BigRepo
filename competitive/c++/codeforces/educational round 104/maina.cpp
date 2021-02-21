#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int c = 0;
    int m = 999;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x < m){
            m = x;
            c = 1;
        }
        else if(x == m)   
            c++;
    }

    cout << n - c << "\n";
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