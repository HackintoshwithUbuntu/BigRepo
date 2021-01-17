#include <bits/stdc++.h>

using namespace std;

int n; 
vector<int> a(n);

bool isHill(int i){
    if(i > 0 && i < n && a[i] > a[i-1] && a[i] > a[i + 1]){
        return true;
    }else return false;
}
bool isValley(int i){
    if(i > 0 && i < n - 1 && a[i] < a[i-1] && a[i] < a[i + 1]){
        return true;
    }else return false;
}

void solve() {
    cin >> n;
    int c = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
    }
    for(int i = 1; i < n - 1; i++){
        if(isHill(i) || isValley(i))
        c++;
    }

    for(int i = 0; i < n - 1; i++){
        
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