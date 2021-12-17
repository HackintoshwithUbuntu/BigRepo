#include <bits/stdc++.h>

using namespace std;

void solve() {
    long n; cin >> n;
    map<int, int> cnt;
    vector<int> a(n);
    for(int &x : a){
        cin >> x;
        cnt[x]++;
    }

    long long sum = accumulate(a.begin(), a.end(), 0);

    if((2 * sum) % n != 0){
        cout << "0" << "\n";
        return;
    }

    long long need = 2 * (sum / n);
    long long ans = 0;

    for (int i = 0; i < n; ++i) {
        int a1 = a[i];
        int a2 = need - a1;
        if (cnt.count(a2)) ans += cnt[a2];
        if (a1 == a2) ans -= 1;
    }

    cout << ans/2 << "\n";
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