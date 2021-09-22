#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    freopen("spacein.txt", "r", stdin);
    freopen("spaceout.txt", "w", stdout);
    int n,f;
    cin >> n >> f;
 
    vector<pair<int, int>> fuel(n);
 
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        fuel[i] = make_pair(x,i);
    }
 
    // We need to calculate two ideal days, with max distance between them
    // Inclusive so watch +1
 
    int cmin1 = INT_MAX;
    vector<pair<int, int>> plaunch;
    for(int i = 0; i < n; i++){
        int x = fuel[i].first;
        if (x<cmin1){
            plaunch.push_back(make_pair(x, fuel[i].second));
            cmin1 = x;
        }
    }
    int cmin = INT_MAX;
    vector<pair<int, int>> pland;
    for(int i = fuel.size() - 1; i >= 0; i--){
        int x = fuel[i].first;
        if (x<cmin){
            pland.push_back(make_pair(x, fuel[i].second));
            cmin = x;
        }
    }
 
    // We have potential launch and land fuel values in O(n), linear time
    // Brute force possible combos and record best possible, O(n^2)
 
    int ans = -1;
    int curend = 0;
 
    for(int i = 0; i < plaunch.size(); i++){
        int fuelq = plaunch[i].first;
        int day1 = plaunch[i].second;
        for(int y = 0; y < pland.size(); y++){
            int fuel2 = pland[y].first;
            int day2 = pland[y].second;
            if(fuelq + fuel2 <= f){
                curend = y;
                if(day2 - day1 + 1 > ans){
                    ans = day2 - day1 + 1;
                }
                break;
            }
        }
    }
 
    if(ans == 1)
        ans = -1;
    cout << ans << "\n";
}