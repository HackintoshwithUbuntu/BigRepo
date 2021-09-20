#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    bool started = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '?' && started){
            if(s[i-1] == 'R')
                s[i] = 'B';
            else
                s[i] = 'R';
        }
        else{
            started = true;
        }
    }

    started = false;
    for(int i = n; i >= 0; i--){
        if(s[i] == '?' && started){
            if(s[i+1] == 'R')
                s[i] = 'B';
            else
                s[i] = 'R';
        }
        else{
            started = true;
        }
    }

    cout << s << "\n";
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