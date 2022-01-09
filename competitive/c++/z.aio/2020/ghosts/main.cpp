#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("ghostin.txt", "r", stdin);
    freopen("ghostout.txt", "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> negstartpos(30000,0);
    vector<int> startpos(30000, 0);

    for(int i = 0; i < n; i++){
        int x,t;
        cin >> x >> t;
        int s = t - (x*k);
        if(s >= 0) startpos[s]++;
        else negstartpos[-s]++;
    }

    // int ans = max(*max_element(negstartpos.begin(), negstartpos.end()), *max_element(startpos.begin(), startpos.end()));

    int nval = *max_element(negstartpos.begin(), negstartpos.end());
    int pval = *max_element(startpos.begin(), startpos.end());
    if(pval > nval) cout << pval << "\n";
    else cout << nval << "\n";
    
}