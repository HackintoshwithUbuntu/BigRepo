#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long hh; 
    long ha, n, mx = 0;
    cin >> ha >> hh >> n;
    vector<long> attack(n);
    vector<long> health(n);
    for(int i = 0; i < n; i++){
        long x; cin >> x;
        attack[i] = x;
        if(x > mx)
            mx = x;
    }
    for(int i = 0; i < n; i++){
        long x; cin >> x;
        health[i] = x;
    }

    for(int i = 0; i < n; i++){
        hh-=attack[i] * ceil(health[i]/(float)ha);
        /*while(health[i] > 0){
            hh -= attack[i];
            health[i] -= ha;
        }*/
    }
    hh+=mx;

    if(hh > 0)
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