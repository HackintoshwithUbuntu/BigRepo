#include <bits/stdc++.h>

using namespace std;

void solve() {
    long a, b, A, B;
    cin >> a >> b;
    long pre = 0, count, ans, pcount = 100;
    if(!a){
		cout<<0<<"\n";
		return;
	}
    if(b < 2){
        pre++;
        b = 2;
    }
    for(int i = 0; i < 30; i++){
        A = a;
        B = b + i;
        count = pre + i;
        while(A != 0){
            A /= B;
            count++;
        }
        if(count < pcount){
            pcount = count;
            ans = count;
        }
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