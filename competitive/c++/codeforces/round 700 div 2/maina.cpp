#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s, ans; cin >> s;
    ans = s;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(count % 2 == 0){
            if(s[i] == 'a')
                s[i] = 'b';
            else   
                s[i] = 'a';
        }
        else if(count % 2 == 1){
            if(s[i] == 'z')
                s[i] = 'y';
            else   
                s[i] = 'z';
        }
        count += 1;
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