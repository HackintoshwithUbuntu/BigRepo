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
// maybe we should make another array for state tracking

// every time we place an umb, we can add multiple to map

unordered_map<pair<int,int>, int> dp;
vector<bool> beacht;
vector<bool> working;
int k, x, n;

int recurse(int start, int end){
    //dp
    if(dp.find({start,end}) != dp.end()){
        int ret = dp[{start, end}];
        return ret;
    }

    // base case
    if(start + x > end){
        for(int i = start; i < end; i++){
            if(working[i] == false){
                for(int o = i; o < i + x; o++){
                    dp[{start, o}] = 1;
                    working[o] = true;
                }
                return 1;
            }else{
                dp[{start, i}] = 0;
            }
        }
        return 0;
    }
    // Now we know that, start more than x away from end
    // We need to decide the next step, go from start, WHAT TO DO WITH PREV RESULT

    if(working[start] == true){
    }
    else{
        
    }
    //go further
    return (x + recurse(start + 1, end));
}

int main() {
    freopen("beachin.txt", "r", stdin);
    freopen("beachout.txt", "w", stdout);
    vector<bool> beacht(n,false);
    int n, u;
    cin >> n >> u >> k >> x;
    for(int i = 0; i < n; i++){
        int p,y;
        cin >> p >> y;
        for(int q = p - 1; q <= y - 1; q++)
            beacht[q] = true;
    }
    int ans = 0;

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
    }
    else if(k*x > n){
        ans = n;
    }
    else{
        for(int i = 0; i < n; i++){
            if(i > 0 && beacht[i - 1] == true)
                continue;
            working = beacht;
            bool done = false;
            int cur = 0;
            for(int o = 0; !done && o < n; o++){
                cur = recurse(i,o);
                // as soon as we go above umb limit out n-1
            }
        }
    }

    cout << ans << "\n";
}