#include <bits/stdc++.h>

using namespace std;

void solve() {
    cout.flush();
    int n;
    cin >> n;
    int l = 1, r = n;
    cout.flush();
    while(l < r){
        int m = (l + r)/2;
        cout << "? " << m << "\n";
        cout.flush();
        int m1; cin >> m1;
        cout << "? " << m + 1 << "\n";
        cout.flush();
        int m2; cin >> m2;
        if(m1 < m2)
            r = m;
        else
            l = m + 1;
    }

    cout << "! " << l << "\n";
    cout.flush();
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