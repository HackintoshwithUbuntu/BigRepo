#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto&x : a)
        cin >> x;
    
    vector<int> dp(n);
    for(int i = n-1; i >= 0; i--){
        dp[i] = a[i];
        int j = dp[i] + i;
        if(j < n)
            dp[i] = dp[i] + dp[j];
    }

    cout << *max_element(dp.begin(),dp.end()) << "\n";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {   
        solve();
    }
    return 0;
}