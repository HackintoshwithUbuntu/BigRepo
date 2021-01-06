#include <bits/stdc++.h>

using namespace std;

void solve() {

    queue<int> r;
    int rl;
    cin >> rl;
    for(int i =0; i < rl; i++){
        int p;
        cin >> p;
        r.push(p);
    }
    queue<int> b;
    int bl;
    cin >> bl;
    for(int i =0; i < bl; i++){
        int p;
        cin >> p;
        b.push(p);
    }

    int ans = 0;
    int tempr = 0;
    int br = 0;
    int tempb = 0;
    int bb = 0;

    while(r.empty() == false){
        tempr += r.front();
        r.pop();
        if(tempr > br)br = tempr;
    }
    while(b.empty() == false){
        tempb += b.front();
        b.pop();
        if(tempb > bb)bb = tempb;
    }
    ans = br + bb;
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