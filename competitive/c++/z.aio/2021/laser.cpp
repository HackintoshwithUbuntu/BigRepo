#include <bits/stdc++.h>
// Done in as little lines as possible... well technically you could put it all on one line
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