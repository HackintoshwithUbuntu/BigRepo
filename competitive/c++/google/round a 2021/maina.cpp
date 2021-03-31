#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<char> s(n);
    for(auto &x: s)
        cin >> x;
    int good = 0;

    int m = n - 1;
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[m]){
            good++;
        }
        m--;
    }


    int ans;
    if(good > k){
        ans = good - k;
    }else{
        ans = k - good;
    }

    cout << ans << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, i = 1;
    cin >> t;
    while(t--) {
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
    return 0;
}