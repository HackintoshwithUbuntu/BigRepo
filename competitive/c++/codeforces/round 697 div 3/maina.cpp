#include <bits/stdc++.h>

using namespace std;

void solve() {
    long n; cin >> n;
    while(n % 2 == 0){
        n /= 2;
    }
    if(n == 1)
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