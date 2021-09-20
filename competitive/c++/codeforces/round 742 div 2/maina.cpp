#include <bits/stdc++.h>

using namespace std;

int n, b, a[100000];

void solve() {
    int n; cin >> n;
    string whole; cin >> whole;
    for(char &x : whole){
        if(x == 'U'){
            cout << "D";
        }
        else if(x == 'D'){
            cout << 'U';
        }
        else cout << x;
    }
    cout << "\n";
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