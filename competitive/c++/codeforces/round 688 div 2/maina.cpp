#include <bits/stdc++.h>

using namespace std;

int bt, lt;

void solve() {
    int ans = 0;

    cin >> bt >> lt;
    bool b[101] = {0};

    for(int i = 0; i < bt; i++){
        int x;
		cin >> x;
		b[x] = true;
    }

    for(int i = 0; i < lt; i++){
        int x;
        cin >> x;
        if (b[x])
        ans++;
    }

    cout << ans << "\n";
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