#include <bits/stdc++.h>

using namespace std;

// we know that finish will be further or equal to last finish
// we do not know when of if the arrays will equalise at osme point
// we only need to calculate the max length, not necessarily the actual positions
// current square can only be true or false
// if true, move forward until next true?
// i guess we could want the umberella start to be the same and then comapre the difference
// last - current
// true - true, same end as last
// true - false, same end as last, ldis - 1
// false - false, different end, keep going till hit true
// false - true, may get jumped, from here to end length is same
// maybe we should make another array for state tracking and i guess we need one for last state as well
// edits: umbreella placing code, add optimisation code
// on first iteration, both should automatically be initailised as false, so no optimisation?
// done: add prev, need: checker and skipper, prev end var

int main() {
    freopen("beachin.txt", "r", stdin);
    freopen("beachout.txt", "w", stdout);

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
        // Selecting start point
        vector<int> preumbs(n,0);
        vector<int> umbs(n,0);
        for(int i = 0; i < n; i++){
            vector<bool> beach = beacht;
            preumbs = umbs;
            vector<int> umbs(n,0);
            long ck = k;
            long co = 0;
            int umbc = 1; // Umberella counter
            int dif = 0;

             // Going as far as we can
            for(int o = i; o < n && (ck > 0 || beach[o] == true); o++){
                if(beach[o] == false){
                    umbs[o] = umbc;
                    umbc++;
                    if(preumbs[o] != 0){
                        dif = preumbs[o] - umbc;
                        o = co - 1;
                        ck = dif + 1;
                    }
                    for(int p = o; p < min(x+o, n); p++)
                        beach[p] = true;
                    ck -= 1;
                    o += x - 2;
                }
                co = min(long(o),n);
            }
            if(co + 1 - i > ans)
                ans = co + 1 - i;
        }
    }

    cout << ans << "\n";

}