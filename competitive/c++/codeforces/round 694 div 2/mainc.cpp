#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n,m; cin >> n >> m;
    vector<long long> k(n);
    vector<long long> c(m);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        k[i] = x;
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        c[i] = x;
    }
    sort(k.rbegin(),k.rend());
    int d = 0;
    long long ans = 0;

    for(int i = 0; i < n; i++){
        if(c[k[i]-1] > c[d]){
            ans += c[d];
            d++;
        }
        else{
            ans += c[k[i]-1];
        }
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