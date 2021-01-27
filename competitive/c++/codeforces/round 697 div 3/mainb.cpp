#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int rem = n % 2020;
    int t = 2021 * rem;
    if(t > n)
        cout << "no" << "\n";
    else
        cout << "yes" << "\n";
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