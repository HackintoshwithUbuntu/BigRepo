#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x,y; cin >> x >> y;
    string s; cin >> s;
    int r = 0, l = 0, u = 0, d = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R')
            r++;
        else if(s[i] == 'L')
                l++;
        else if(s[i] == 'U')
                u++;
        else if(s[i] == 'D')
                d++;
    }

    bool ans = true;
    if(x > 0 && r < x || x < 0 && l < -x || y > 0 && u < y || y < 0 && d < -y)
        ans = false;

    if(ans)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
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