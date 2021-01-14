#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> a(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        int y; cin >> y;
        a[i] = y;
        ans += y;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] % x == 0){
            a.insert(a.end(), x, a[i] / x);
            ans += a[i];
        }
        else break;
    }

    cout << ans << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}