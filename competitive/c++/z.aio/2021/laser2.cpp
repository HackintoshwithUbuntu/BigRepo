#include <bits/stdc++.h> 
int main() { freopen("laserin.txt", "r", stdin); freopen("laserout.txt", "w", stdout); int n, cl = 0, ans = 0; std::string a, b; std::cin >> n >> a >> b;for(int i = 0; i < 2*n; i++){ if(a[i] == 'D' && b[i] == 'R') cl++; if(a[i] == 'R' && b[i] == 'D') cl--; ans = std::max(cl, ans); }std::cout << ans << "\n";}
// RIP vertical scroll wheel users (disregard the shift key)
// ...I had some mercy ↓↓↓↓↓↓↓↓↓
/*
#include <bits/stdc++.h>
// Didn't use namespace to save lines, enjoy reading those std's
int main() {
    freopen("laserin.txt", "r", stdin); freopen("laserout.txt", "w", stdout);
    int n, cl = 0, ans = 0; std::string a, b;
    std::cin >> n >> a >> b;
    for(int i = 0; i < 2*n; i++){
        if(a[i] == 'D' && b[i] == 'R') cl++;
        if(a[i] == 'R' && b[i] == 'D') cl--;
        ans = std::max(cl, ans);
    }
    std::cout << ans << "\n";
}
*/
