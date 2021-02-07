#include <bits/stdc++.h>

using namespace std;

void solve() {
    int q,d; cin >> q >> d;
    int max = 10*d -1;
    bool dp[max + 1] = {false};
    int uptil = 0;
    vector<long> inputs(q);
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        inputs[i] = x;
    }
    for(int i = 0; i < q; i++){
        if(inputs[i] > max || dp[inputs[i]] == true){
            cout << "YES" << "\n";
            continue;
        }
        else if(inputs[i] <= uptil){
            cout << "NO" << "\n";
            continue;
        }
        else{
            for(int a = d; a <= inputs[i]; a += d){
                dp[a] = true;
                for(int z = a; z < max; z+=10)
                    dp[z] = true;
                uptil = a;
            }
            if(dp[inputs[i]] == false)
                cout << "NO" << "\n";
            else
                cout << "YES" << "\n";
        }
    }
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