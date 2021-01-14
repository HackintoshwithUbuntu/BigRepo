#include <bits/stdc++.h>

using namespace std;

void solve() {
int n, m; cin >> n >> m;
	long long minimumBeauty = 0, maximumBeauty = 0;
	while (n--) {
		int x; cin >> x;
		minimumBeauty += x;
		maximumBeauty += (x + m - 1) / m;
	}
	minimumBeauty = (minimumBeauty + m - 1) / m;
	cout << minimumBeauty << " " << maximumBeauty << "\n";
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