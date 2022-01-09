#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("baublesin.txt", "r", stdin);
    freopen("baublesout.txt", "w", stdout);

    int ans = 0, ro, bo, s, rp, bp;
    cin >> ro >> bo >> s >> rp >> bp;

    if(ro >= rp && bo >= bp){
        if(rp == 0){
            ans = s + bo - bp + 1;
        }
        else if(bp == 0){
            ans = s + ro - rp + 1;
        }
        else{
            ans = s + min(ro - rp, bo - bp) + 1;
        }
    }
    else if(ro < rp && bo < bp){
        ans = s + ro - rp + bo - bp + 1;
    }
    else if(ro >= rp && bo < bp){
        ans = s + bo - bp + 1;
    }
    else if(bo >= bp && ro < rp){
        ans = s + ro - rp + 1;
    }

    if(ans < 0) ans = 0;
    cout << ans << "\n";
}