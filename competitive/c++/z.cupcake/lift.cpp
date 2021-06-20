#include <bits/stdc++.h>

using namespace std;

long umax(long first,long second){
    if(first > second){
        return first;
    }else{
        return second;
    }
}

long umin(long first,long second){
    if(first > second){
        return second;
    }else{
        return first;
    }
}

void solve() {

    int n, p, c;
    cin >> n >> p >> c;

    string up = "UP", down = "DN";
    bool state = true; //true up, false down
    int cfloor = 0; // display +1

    vector<vector<int>> floor;
    vector<int> lift(p-1);

    if(state){
        
    }

    long long ans;
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