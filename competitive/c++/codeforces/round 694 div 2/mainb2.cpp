#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<pair<int, int>> a(n);
    long long ans = 0;
    for(int i = 0; i < n; i++){
        int y, c; 
        cin >> y, c=1;
        a[i] = make_pair(y,c);
        ans += y;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i].first % x == 0){
                a.push_back(make_pair(a[i].first/x, x*a[i].second));
                ans += (a[i].first/x) * (x * a[i].second);
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
    while(t--){   
        solve();
    }
    return 0;
}