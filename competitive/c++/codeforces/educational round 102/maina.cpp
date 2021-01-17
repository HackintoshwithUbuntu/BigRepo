#include <bits/stdc++.h>
 
using namespace std;
 
 
void solve() {
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
 
    int s = 999, b = 999, m = 0;
    for(auto& x : a){
        if(x < s){
            b = s;
            s = x;
        }   
        else if(x < b)
            b = x;
        if(x > m)
            m = x;
    }
    
    if(m <= d)  
        cout << "YES" << "\n";
    else if((s+b) <= d)
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