#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>l(n);
    for(int &x: l)
        cin >> x;

    int ans = 0;

    for (int i = 0; i < n - 1; i++){
        int j = min_element(l.begin() + i, l.end())-l.begin();
        reverse(l.begin() + i, l.begin() + j + 1);
        ans += j - i + 1;
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