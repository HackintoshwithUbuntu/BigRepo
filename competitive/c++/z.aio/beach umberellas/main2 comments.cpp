#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("beachin.txt", "r", stdin);
    freopen("beachout.txt", "w", stdout);

    // Taking input
    long n, u, k, x;
    cin >> n >> u >> k >> x;
    vector<bool> beacht(n,false);
    for(int i = 0; i < n; i++){
        int p,y;
        cin >> p >> y;
        for(int q = p - 1; q <= y - 1; q++)
            beacht[q] = true;
    }
    long ans = 0;

    // Getting rid of edge case
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
        ans = max;
    }else{

        // The actual code
        // Outer loop selecting a start point
        for(int i = 0; i < n; i++){
            // Making editable copies of variables
            vector<bool> beach = beacht;
            long ck = k;
            long co = 0;

            // Going as far as we can from the start point
            for(int o = i; o < n && (ck > 0 || beach[o] == true); o++){
                // "Placing" the umberella, if needed
                if(beach[o] == false){
                    for(int p = o; p < min(x+o, n); p++)
                        beach[p] = true;
                    ck -= 1;
                }
                // Update counter
                co = o;
            }

            // +1 to include start and finish, take i away as that is the start point and o is the finish
            if(co + 1 - i > ans)
                ans = co + 1 - i;
        }
    }

    cout << ans << "\n";
}