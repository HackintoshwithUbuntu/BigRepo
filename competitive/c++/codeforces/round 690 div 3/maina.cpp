#include <bits/stdc++.h>

using namespace std;

int n, b;

void solve() {
    int a[300];
    int ans[300];

    cin >> n;
    for(int i = 0; i < n; i++){
        int z;
        cin >> z;
        a[i] = z;
    }
    int lp = 0;
    int rp = n - 1;

    for (int i = 0; i < n; i++) {
        if ((i & 1) == 0) {
            ans[i] = a[lp++];
        }
        else {
            ans[i] = a[rp--];
        }
  }


    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";
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