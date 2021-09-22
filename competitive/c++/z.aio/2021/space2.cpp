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
 
    reverse(pland.begin(), pland.end());

    // We have potential launch and land fuel values in O(n), linear time (reverse is a linear operation), (constants don't matter)
    // Brute force possible combos and record best possible, almost a sliding window so O(N)?
 
    int ans = -1;
    int curend = 0;
 
    for(int i = 0; i < pland.size(); i++){
        int fuel2 = pland[i].first;
        int day2 = pland[i].second;
        for(int y = curend; y < plaunch.size(); y++){
            int fuelq = plaunch[y].first;
            int day1 = plaunch[y].second;
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