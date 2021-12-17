#include <bits/stdc++.h>

using namespace std;

vector<bool> read;

bool hasbeenread(int chap){
    if(read[chap] == true) return true;
    else{return false;}
}

void solve() {
    int ans = 0;
    int n; cin >> n;
    unordered_map<int, vector<int>> req;
    read.resize(n);
    vector<int> temp;
    list<int> left;
    int store = -1;

    // index of map goes to vector of ints required
    // left stores chapters left to read

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        for(int y = 0; y < x; y++){
            int z; cin >> z;
            temp.push_back(z);
        }
        if(temp.empty() == false) left.push_back(i);
        else read[i] = true;
        req[i] = temp;
        temp.clear();
    }

    
    while(left.empty() == false){
        if(left.size() == store){
            ans = -1;
            break;
        }
        else store = left.size();
        for(int i = 0; i < n; i++){
            if(req[i].empty() == true){
                continue;
            }
            else{
                bool checker = true;
                for(int x = 0; x < req[i].size(); x++){
                    if(!hasbeenread(req[i][x])){
                        checker = false;
                        break;
                    }
                    else{
                        req[i].erase(req[i].begin() + x);
                    }
                }
                if(checker){
                    read[i] = true;
                    left.remove(i);
                }
            }
        }
        ans++;
    }

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