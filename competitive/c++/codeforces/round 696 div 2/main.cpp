#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    string b; cin >> b;

    int last = 1;
    cout << 1;
    for(int i = 1; i < b.length(); i++){
        if(b[i] + 1 == b[i-1] + last){
            cout << 0;
            last = 0;
        }else{
            cout << 1;
            last = 1;
        }
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