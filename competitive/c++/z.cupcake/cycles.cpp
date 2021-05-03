#include <bits/stdc++.h>

using namespace std;

int nextn(int a, int b, int c){
    int next_val = (a * current_val*current_val + b) % c;
    return next_val;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<pair<int, int>> list;

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    list.push_back(d);

    while(true){
        list.push_back(nextn(a, b, c));
        for(int i = 0; i < list.size(); i++){
            
        }
    }
    
    return 0;
}