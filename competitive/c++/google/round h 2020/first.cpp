#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, k, s;

void solve() {
    cin >> n >> k >> s;

    int pre = k - 1;
    int extra;
    int ans;

    if (k - s > s){
        extra = n + 1;
    }
    else
    {
        extra = (k-s) + ((n+1)-s);
    }
    ans = pre + extra;
    
    cout << ans << "\n";
}

int main()
{

    int t, i = 1;
    cin >> t;
    while(t--)
    {   
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
}