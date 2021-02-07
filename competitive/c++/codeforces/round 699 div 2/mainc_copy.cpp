#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> ans(m), c(m), cc(m);
    vector<int> a(n), b(n);
    vector<pair<int,int>> dif;
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
        c[i] = x;
    }
    int last = c[m-1];
    int posl = -1;
    for(int i = 0; i < n; i++){
        if(b[i] == last){
            posl = i + 1;
            break;
        }
    }
    if(posl == -1){
        cout << "NO" << "\n";;
        return;
    }
    // Checked last and taken input
    // Now finding differences
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            dif.push_back(make_pair(b[i],i));
        }
    }
    cc = c;
    ans[m-1] = posl;
    int found = 0;
    for(int i = 0; i < dif.size(); i++){
        for(int x = 0; x < m; x++){
            if(dif[i].first == c[x]){
                c.erase(c.begin() + x);
                found++;
                break;
            }
        }
    }
    if(found != dif.size()){
        cout << "NO" << "\n";
        return;
    }
    // We know that all differences are in array c, so the answer must be true
    for(int i = 0; i < m; i++){
        // What if dif.size() = 0
        for(int x = 0; x < dif.size(); x++){
            if(cc[i] == dif[x].first){
                ans[i] = dif[x].second + 1;
                dif[x].first = -1;
                break;
            }
            if(x == dif.size() - 1)
                ans[i] = posl;
        }
        if(dif.size() == 0){
            for(int x = 0; x < m - 1; x++)
                ans[x] = posl;
        }
    }

    // Output
    cout << "YES" << "\n";
    for(int i = 0; i < m; i++){
        if(i)
            cout << " ";
        cout << ans[i];
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