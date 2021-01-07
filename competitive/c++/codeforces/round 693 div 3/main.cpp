#include <bits/stdc++.h>

using namespace std;

void solve() {
    int w,h,n;
    int p = 1;

    cin >> w >> h >> n;
    while(w % 2 == 0 || h % 2 == 0){
        if(w % 2 ==0){
            p *= 2;
            w = w/2;
        }
        if(h % 2 ==0){
            p *= 2;
            h = h/2;
        }
    }
    if(p >= n){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
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