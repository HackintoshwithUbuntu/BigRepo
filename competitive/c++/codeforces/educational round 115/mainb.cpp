#include <bits/stdc++.h>

using namespace std;

void solve() {
    int ans = 0;
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(5));

    for(int i = 0; i < n; i++){
        for(int m = 0; m < 5; m++){
            cin >> v[i][m];
        }
    }

    bool checker = false;

    for(int x = 0; x < 5; x++){
        for(int y = x+1; y < 5; y++){
            int ka = 0;
            int kb = 0;
            int kab = 0;
            for (int i = 0; i < n; i++) {
                if (v[i][x] == 1 && v[i][y] == 1) {
                    kab += 1;
                } 
                else{
                    if (v[i][x] == 1) {
                    ka += 1;
                    }
                    if (v[i][y] == 1) {
                    kb += 1;
                    }
                }

                if (ka + kb + kab == n && ka + kab >= n / 2 && kb + kab >= n / 2) {
                   checker = true;
        }
            }
        }
    }

    if(checker)
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