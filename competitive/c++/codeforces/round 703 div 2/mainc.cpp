#include <bits/stdc++.h>

using namespace std;

int ask(int l, int r) {
    if (l >= r) return -1;
    cout << "? " << l + 1 << ' ' << r + 1 << endl;
    int ans;
    cin >> ans;
    return ans - 1;
}

void solve() {
    int n; cin >> n;
    int l = 0, r = n - 1, mid;
    int smax = ask(l,r);
    if(smax == 0 || ask(l,smax) != smax){
        l = smax;
        while(r - l > 1){
            int mid = (l + r) / 2;
            if(ask(smax,mid) == smax)
                r = mid;
            else
                l = mid;
        }
        cout << "! " << r + 1 << endl;
    }
    else{
        r = smax;
        while(r - l > 1){
            int mid = (l + r) / 2;
            if(ask(mid,smax) == smax)
                l = mid;
            else
                r = mid;
        }
        cout << "! " << l + 1 << endl;
    }   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}