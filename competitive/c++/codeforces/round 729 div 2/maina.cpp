#include <bits/stdc++.h>

using namespace std;

// odd + even = odd

void solve() {
    int n; cin >> n;
    int even = 0;
    int odd = 0;
    for(int i = 0; i < 2*n; i++){
        int x; cin >> x;
        if(x % 2 == 0)
            even++;
        else
            odd++;
    }


    if(even == odd)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
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