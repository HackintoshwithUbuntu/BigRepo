#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1)
        cout << 9 << "\n";
    else if(n == 2)
        cout << 98 << "\n";
    else if (n == 3)
        cout << 989 << "\n";
    else{
        cout << 989;
        for(int i = 0; i < n - 3; i++){
            cout << i%10;
        }
        cout << "\n";
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