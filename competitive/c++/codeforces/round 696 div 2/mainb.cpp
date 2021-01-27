#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    for(int i=2; i<=sqrt(n); i++) 
	{
        if(n%i==0) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    int a = 0, b = 0;
    for(int i = 1 + n; true; i++){
        if(prime(i)){
            a = i;
            break;
        }
    }
    for(int i = a + n; true; i++){
        if(prime(i)){
            b = i;
            break;
        }
    }

    cout << a*b << "\n";
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