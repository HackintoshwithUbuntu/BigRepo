#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> ans(m);
    vector<pair<int,bool>> c(m);
    vector<int> a(n), b(n);
    vector<int> dif;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        b[i] = x;
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        c[i] = make_pair(x,false);
    }
    int last = c[m-1].first;
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(b[i] == last){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        cout << "NO";
        return;
    }
    // Checked last and taken input
    // Now finding differences
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            dif.push_back(b[i]);
        }
    }
    ans[m-1] = last;
    int found = 0;
    for(int i = 0; i < dif.size(); i++){
        for(int x = 0; x < n; x++){
            if(dif[i] == c[x].first){
                
                found++;
                break;
            }
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