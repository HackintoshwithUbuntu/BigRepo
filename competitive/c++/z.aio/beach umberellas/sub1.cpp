#include <bits/stdc++.h>

using namespace std;

int main() {
    // Setting IO files
    freopen("beachin.txt", "r", stdin);
    freopen("beachout.txt", "w", stdout);

    // Variables
    long n, u, k, x;
    cin >> n >> u >> k >> x;
    vector<bool> beacht(n,false);

    // Populating beach
    for(int i = 0; i < n; i++){
        int p,y;
        cin >> p >> y;
        for(int q = p - 1; q <= y - 1; q++) // Filling range
            beacht[q] = true;
    }
    long ans = 0;

    // Don't know why this is giving a TLE
    if(k == 0){
        int max = 0;
        int cur = 0;
        for(int i = 0; i < n; i++){
            if(beacht[i]){
                cur += 1;
                if(cur > max)
                    max = cur;
            }
            else
                cur = 0;
        }
        ans = max;}
    else{
        cout << "Wrong input";
    }

    cout << ans << "\n";

}