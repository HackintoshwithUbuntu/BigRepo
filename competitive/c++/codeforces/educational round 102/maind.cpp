#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        char x; cin >> x;
        if (x == '+')
            a[i] = 1;
        else
            a[i] = -1;
    }

    vector<pair<int,int>> q(m);
    for(int i = 0; i < m; i++){
        int l,r;
        cin >> l >> r;
        q[i] = make_pair(l - 1,r - 1);
    }


    vector<pair<int,int>> b(n);

    //first is max, second is min
    int t = a[0];
    if(t < 0){
        b[0].first = t;
        b[0].second = 0;
    }else{
        b[0].first = 0;
        b[0].second = t;
    }

    //Precomputation of prefix
    for(int i = 1; i < n; i++){
        t += a[i];
        b[i] = make_pair(min(b[i-1].first,t), max(b[i-1].second, t));
        /*if(t > b[i-1].first){
            b[i].first = t;
            b[i].second = b[i-1].second;
        }
        else if (t < b[i-1].second){
            b[i].first = b[i-1].first;
            b[i].second = t;
        }
        else{
            b[i].first = b[i-1].first;
            b[i].second = b[i-1].second;
        }*/
    }

    //Doing q
    for(int i = 0; i < m; i++){
        int l = q[i].first;
        int r = q[i].second;
        int pmin = b[l].first;
        int pmax = b[l].second;

    }

    int ans;
    cout << ans << "\n";
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